#include <iostream>
#include<vector>
using namespace std;
int main() {
    int arr[2][2] = {{1, 2}, {3, 4}};
    int arr2[2][2] = {{5, 6}, {7, 8}};
    int prod[2][2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            prod[i][j] = 0;  // Initialize the product element to 0
            for (int k = 0; k < 2; k++) {
                prod[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << prod[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}