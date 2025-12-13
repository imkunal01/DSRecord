#include <iostream>
using namespace std;
int main() {
    int arr[5] = {2,3,5,1,4};
    for (int i = 0; i<5; i++){
        for (int j = 0;j<5;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i< 5; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}