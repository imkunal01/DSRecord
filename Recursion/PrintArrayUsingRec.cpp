#include<iostream>
using namespace std;
int printArray(int arr[], int n) {
    if (n == 0) {
        return 0; // Base case: if the array is empty, do nothing
    }
    cout << arr[0] << " "; // Print the first element
    return printArray(arr + 1, n - 1); // Recursive call with the rest of the array
}
int printArrayRev(int arr[], int n) {
    if (n == 0) {
        return 0; // Base case: if the array is empty, do nothing
    }
    cout << arr[n-1] << " "; // Print the first element
    return printArrayRev(arr,n-1); // Recursive call with the rest of the array
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // printArray(arr, n); // Call the function to print the array
    printArrayRev(arr, n); // Call the function to print the array
    cout << endl;
    
}