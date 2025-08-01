// Decending Bubble sort Algo
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {5,4,3,1,2};
    cout<<"Plain Array: ";
    for (int i = 0; i< 5; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i<5; i++) {
        for (int j = 0; j<5; j++) {
            if (arr[j] > arr[j+1]) {
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted In ASC: ";
    for (int i = 0; i< 5; i++){
        cout<<arr[i]<<" ";
        
    }
}
