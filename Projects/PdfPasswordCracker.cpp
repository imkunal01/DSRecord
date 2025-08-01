#include <iostream>

#include <fstream>
#include <vector>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;  // Mutex for thread safety

// Function to check if a PDF is encrypted
bool is_pdf_encrypted(const string &pdf_path) {
    auto doc = poppler::document::load_from_file(pdf_path);
    return doc && doc->is_encrypted();
}

// Function to attempt unlocking the PDF
void attempt_crack(const string &pdf_path, vector<string> passwords) {
    for (const string &password : passwords) {
        lock_guard<mutex> lock(mtx);
        auto doc = poppler::document::load_from_file(pdf_path, password);
        if (doc && !doc->is_encrypted()) {
            cout << "[+] Password found: " << password << endl;
            return;
        }
    }
}

int main() {
    string pdf_path = "test.pdf";

    if (!is_pdf_encrypted(pdf_path)) {
        cout << "[!] PDF is not password-protected." << endl;
        return 0;
    }

    cout << "[*] PDF is password-protected. Attempting to crack..." << endl;

    // Sample password list
    vector<string> passwords = {"1234", "password", "letmein", "admin", "2024"};

    // Multi-threading setup
    int num_threads = 4;
    vector<thread> threads;
    int chunk_size = passwords.size() / num_threads;

    for (int i = 0; i < num_threads; ++i) {
        vector<string> chunk(passwords.begin() + i * chunk_size, passwords.begin() + (i + 1) * chunk_size);
        threads.emplace_back(attempt_crack, pdf_path, chunk);
    }

    for (auto &t : threads) {
        t.join();
    }

    cout << "[-] Password not found." << endl;
    return 0;
}
