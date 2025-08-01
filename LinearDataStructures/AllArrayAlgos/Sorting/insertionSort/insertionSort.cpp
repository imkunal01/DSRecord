#include <iostream>
using namespace std;
int main() {
    
    int n = 6;
    int arr[n] = {1,5,4,3,6,2};
    for(int i = 0;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j] ;
            j--;
        }
        arr[j+1] = temp;

    }
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}