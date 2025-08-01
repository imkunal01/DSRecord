// Decending Bubble sort Algo
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {1,4,3,5,2};
    // cout<<"Plain Array: ";
    // for (int i = 0; i< 5; i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    for (int i = 0; i<5; i++) {
        bool flag = true;
        for (int j = 0; j<5; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    
    cout<<"Sorted In DESC: ";
    for (int i = 0; i< 5; i++){
        cout<<arr[i]<<" ";
        
    }
}
