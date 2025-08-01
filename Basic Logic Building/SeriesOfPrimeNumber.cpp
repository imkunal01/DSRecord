#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 100; // number of prime numbers to print
    int count = 0;
    int num = 2; // start from 2, the first prime number

    while (num < 100) {
        if (isPrime(num)) {
            cout << num << endl;
            // count++;
        }
        num++;
    }

    return 0;
}