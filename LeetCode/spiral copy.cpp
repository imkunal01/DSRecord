#include <iostream>
using namespace std;

int main() {
    const int ROWS = 4;
    const int COLS = 4;
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int top = 0, bottom = ROWS - 1;
    int left = 0, right = COLS - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; ++i) {
            cout << matrix[top][i] << " ";
        }
        ++top;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; ++i) {
            cout << matrix[i][right] << " ";
        }
        --right;

        // Traverse from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << matrix[bottom][i] << " ";
            }
            --bottom;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << matrix[i][left] << " ";
            }
            ++left;
        }
    }

    return 0;
}
