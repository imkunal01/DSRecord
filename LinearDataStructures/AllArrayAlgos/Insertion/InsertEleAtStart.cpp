#include <iostream>             // Includes the input-output stream library for using cout
using namespace std;            // Allows usage of standard functions like cout without std:: prefix

#define MAX 100                 // Defines a constant MAX to be used for the size of the array

int main() {                    // Main function where the execution of the program starts
    int arr[MAX] = {2, 3, 4, 5, 6}; // Initializes an array of size MAX with 5 elements
    int n = 5;                  // Sets n as the current size of the array (5 elements in use)
    int ele = 1;                // Element to be inserted at the beginning of the array
    
                                // Loop to shift elements of the array one position to the right
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i-1];      // Move each element one position to the right
    }
    
    arr[0] = ele;               // Insert the new element at the start (index 0) of the array
    n++;                        // Increment the size of the array after insertion
    
                                // Loop to print the elements of the array
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";  // Output each element followed by a space
    }
    
    return 0;                   // Return 0 indicating successful program termination
}
