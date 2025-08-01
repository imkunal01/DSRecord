#include <iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[]) {
    for (int i = 0; i < 5; i++) {
        int minIndex = i;
        for (int j = i+1; j < 5; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // int temp = arr[minIndex];
        // arr[minIndex] = arr[i];
        // arr[i] = temp;
        swap(arr[i],arr[minIndex]);
    }
}

int main() {
    int arr[5] = {5, 2, 9, 1, 5};

    selectionSort(arr);

    cout << "Sorted array: ";
    for(int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
