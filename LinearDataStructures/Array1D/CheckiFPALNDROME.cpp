#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1}; // Example array
    bool isPalindrome = true;

    for (int i = 0; i < 5 ; ++i) {
        if (arr[i] != arr[5 - 1 - i]) {
            isPalindrome = false;
        }
    }

    if (isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}