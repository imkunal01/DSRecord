#include <iostream>
#include<string>
#include<algorithm>
#include<limits.h>
using namespace std;
int main() {
    int arr[5] = {2,4,1,3,5};
    for (int i = 0; i< 5; i++) {
        int x = INT_MIN;
        int mix = -1;
        for (int j = i; j<5; j++) {
            if(arr[j]>x){
                x = arr[j];
                mix = j;
            }
        
        }
        swap(arr[i],arr[mix]);
    }
    for (int i = 0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


// STABILITY OF SELECTION SORT
// Selection sort is not a stable sorting algorithm. It is not suitable for sorting linked lists and arrays