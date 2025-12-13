#include <iostream>

using namespace std;

// Function to merge two sorted arrays without duplicates and print them
void mergeSortedArrays(int n, int arr1[], int m, int arr2[]) {
    int merged[n + m]; // merged array size is n + m

    // Merge two arrays into merged array without duplicates
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (k == 0 || merged[k - 1] != arr1[i]) {
                merged[k++] = arr1[i++];
            } else {
                i++;
            }
        } else if (arr2[j] < arr1[i]) {
            if (k == 0 || merged[k - 1] != arr2[j]) {
                merged[k++] = arr2[j++];
            } else {
                j++;
            }
        } else {
            if (k == 0 || merged[k - 1] != arr1[i]) {
                merged[k++] = arr1[i++];
                j++;
            } else {
                i++;
                j++;
            }
        }
    }

    // Copy remaining elements of arr1 if any
    while (i < n) {
        if (k == 0 || merged[k - 1] != arr1[i]) {
            merged[k++] = arr1[i++];
        } else {
            i++;
        }
    }

    // Copy remaining elements of arr2 if any
    while (j < m) {
        if (k == 0 || merged[k - 1] != arr2[j]) {
            merged[k++] = arr2[j++];
        } else {
            j++;
        }
    }

    // Print first n elements
    for (int idx = 0; idx < n; ++idx) {
        if (idx > 0) cout << " ";
        cout << merged[idx];
    }
    cout << endl;

    // Print remaining m elements
    for (int idx = n; idx < n + m; ++idx) {
        if (idx > n) cout << " ";
        cout << merged[idx];
    }
    cout << endl;
}

int main() {
    int n = 2, m = 3;
    // cin >> n;
    int arr1[n] = {1,2,3};
    // for (int i = 0; i < n; ++i) {
    //     cin >> arr1[i];
    // }
    
    // cin >> m;
    int arr2[m] = {4,5};
    // for (int i = 0; i < m; ++i) {
    //     cin >> arr2[i];
    // }
    
    mergeSortedArrays(n, arr1, m, arr2);
    
    return 0;
}
