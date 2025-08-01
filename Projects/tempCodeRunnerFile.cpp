#include <iostream>
#include <vector>
#include <set>
#include <thread>
#include <mutex>
#include <fstream>
#include <cstdlib>  // For system() command
#include <sstream>

using namespace std;

mutex mtx;  // Mutex for thread safety
bool passwordFound = false;  // Flag to stop other threads if password is found

// Define basic elements
vector<string> words = {"password", "123", "abc", "qwerty", "letmein"};
vector<string> symbols = {"@", "#", "!", "$"};
vector<string> numbers = {"2024", "007", "1234"};

// Function to generate more diverse password combinations
vector<string> generateCombinations() {
    set<string> combinations;

    for (const auto& word : words) {
        combinations.insert(word);
        string capitalized = word;
        capitalized[0] = toupper(capitalized[0]);
        combinations.insert(capitalized);
        string upper = word;
        transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
        combinations.insert(upper);
    }

    for (const auto& w : words)
        for (const auto& n : numbers)
            for (const auto& s : symbols) {
                combinations.insert(w + n + s);
                combinations.insert(s + w + n);
                combinations.insert(w + s + n);
            }

    for (const auto& w1 : words)
        for (const auto& n1 : numbers)
            for (const auto& s1 : symbols)
                for (const auto& w2 : words)
                    for (const auto& n2 : numbers)
                        for (const auto& s2 : symbols)
                            combinations.insert(w1 + n1 + s1 + w2 + n2 + s2);

    return vector<string>(combinations.begin(), combinations.end());
}

// Function to attempt cracking the PDF password using qpdf
void attemptCrack(const string& pdfPath, vector<string> passwords) {
    for (const auto& password : passwords) {
        if (passwordFound) return;  // Stop if another thread found the password

        // Construct qpdf command to try opening the PDF
        string command = "qpdf --password=" + password + " --check " + pdfPath + " 2>&1";
        FILE* pipe = popen(command.c_str(), "r");

        if (!pipe) {
            cerr << "Failed to run qpdf command." << endl;
            return;
        }

        char buffer[128];
        string result;
        while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
            result += buffer;
        }
        pclose(pipe);

        // If qpdf doesn't report a password error, we assume the password is correct
        if (result.find("incorrect user password") == string::npos) {
            lock_guard<mutex> lock(mtx);
            if (!passwordFound) {
                cout << "[+] Password found: " << password << endl;
                passwordFound = true;
            }
            return;
        }
    }
}

int main() {
    string pdfPath = "projects/ppdf.pdf";

    // Check if the PDF is password-protected
    string checkCommand = "qpdf --check " + pdfPath + " 2>&1";
    FILE* pipe = popen(checkCommand.c_str(), "r");
    if (!pipe) {
        cerr << "Failed to run qpdf command." << endl;
        return 1;
    }

    char buffer[128];
    string checkResult;
    while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
        checkResult += buffer;
    }
    pclose(pipe);

    if (checkResult.find("incorrect user password") == string::npos) {
        cout << "[!] PDF is not password-protected." << endl;
        return 0;
    }

    cout << "[*] PDF is password-protected. Attempting to crack..." << endl;

    // Generate passwords
    vector<string> passwords = generateCombinations();

    // Divide passwords among available threads
    int numThreads = 4;
    size_t chunkSize = max((size_t)1, passwords.size() / numThreads);
    vector<thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        size_t startIdx = i * chunkSize;
        size_t endIdx = min(startIdx + chunkSize, passwords.size());
        vector<string> chunk(passwords.begin() + startIdx, passwords.begin() + endIdx);

        threads.emplace_back(attemptCrack, pdfPath, chunk);
    }

    // Wait for all threads to finish
    for (auto& t : threads) {
        if (t.joinable()) t.join();
    }

    if (!passwordFound) {
        cout << "[-] Password not found." << endl;
    }

    return 0;
}
