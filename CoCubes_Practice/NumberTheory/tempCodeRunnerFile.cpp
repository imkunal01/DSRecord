#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 13;

    cout << n << " = ";
    
    // Divide by 2 repeatedly
    while (n % 2 == 0) {
        cout << 2 << " * ";
        n = n / 2;
    }

    // Check for odd factors up to sqrt(n)
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            cout << i << " * ";
            n = n / i;
        }
    }

    // If n is a prime number greater than 2 after the loop
    if (n > 1)
        cout << n;
    
    cout << "\n";
}