#include <iostream>
#include <cctype> // for tolower() function
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase for easy comparison
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (isalpha(ch)) { // Check if it's a letter
            if (isVowel(ch)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;

    return 0;
}
