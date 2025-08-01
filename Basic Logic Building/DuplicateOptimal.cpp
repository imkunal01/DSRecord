#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4};
    int sum = 0;
    int s = (n - 1) * n / 2;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int duplicate = sum - s;
    cout << "Duplicate number: " << duplicate << endl;
    return 0;
}