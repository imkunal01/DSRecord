#include <iostream>
using namespace std;

int main() {
    int n = 12321;
    int original = n;
    int reversed = 0;
    bool flag = false;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
        flag =true;
    }

    if (flag) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}