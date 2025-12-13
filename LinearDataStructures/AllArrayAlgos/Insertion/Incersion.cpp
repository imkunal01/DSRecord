#include<iostream>
using namespace std;
int main() {
    int arr[5] = {2,3,1,5,4};
    // for (int i = 0; i< 5; i++) {
    //     for(int j = i;j>=1 && arr[j]>arr[j-1];j--){
    //         swap(arr[j],arr[j-1]);
    //     }
    // }
    // // decending order
    // for (int i = 0; i< 5; i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    //  // accesnding order
    // int arr2[5] = {2,3,1,5,4};
    // for (int i = 0; i< 5; i++) {
    //     int j = i;
    //     while(j>=1 && arr2[j]<arr2[j-1]){
    //         swap(arr2[j-1],arr2[j]);
    //         j--;
    //     }

    // }
    // for (int i = 0; i< 5; i++) {
    //     cout<<arr2[i]<<" ";
    // }

    for (int i = 0; i< 5; i++) { 
        int j = i;
        while(j>=1){
            if(arr[j]>=arr[j-1]){
                break;
            }
            else{
                swap(arr[j],arr[j-1]);
                j--;
            }
            
        }
    }
    for (int i = 0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
     return 0;
}