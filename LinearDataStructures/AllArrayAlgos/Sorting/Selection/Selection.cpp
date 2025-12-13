#include <iostream>
#include <limits.h>
using namespace std;
int main() {
    int arr[6] = {6,3,5,4,2,1};
    
    for (int i = 0; i<6; i++) {
        int x = INT_MAX;
        int minx = -1;
        for (int j = i; j<6; j++) {
            if(arr[j]<x){
                x = arr[j];
                minx = j;
            }
        }
        swap(arr[i],arr[minx]);
    }

    for (int i = 0; i<6; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}