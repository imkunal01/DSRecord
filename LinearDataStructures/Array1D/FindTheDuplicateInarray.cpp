#include <iostream>
using namespace std;
void findDuplicateIndices(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                cout << "Duplicate number " << arr[i] << " found at index: " << j <<endl;
                return;
            }
        }
    }
    cout << "No duplicates found." <<endl;
}

int main() {
    int arr[] = {1, 3, 3, 4, 7}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    findDuplicateIndices(arr, size);

    return 0;
}
