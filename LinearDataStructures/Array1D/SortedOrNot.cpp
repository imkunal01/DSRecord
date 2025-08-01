#include <iostream>

using namespace std;

// Function to sort the array using Selection Sort
void selectionSort(int arr[]) {
    for (int i = 0; i < 5; i++) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i+1; j < 5; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
     // Define the array
    int arr[5] = {5, 2, 9, 1, 5};

    // Sort the array in increasing order
    selectionSort(arr);

    // Print the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
