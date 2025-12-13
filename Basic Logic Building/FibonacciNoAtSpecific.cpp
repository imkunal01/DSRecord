#include <iostream>
using namespace std;

int fibonacci(int position) {
    if (position <= 0) return 0;
    if (position == 1) return 1;

    int prev1 = 0, prev2 = 1, current;
    for (int i = 2; i <= position; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}

int main() {
    int position;
    cout << "Enter the position: ";
    cin >> position;

    int result = fibonacci(position);
    cout << "Fibonacci number at position " << position << " is: " << result << endl;

    return 0;
}
