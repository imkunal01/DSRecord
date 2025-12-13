#include<iostream>
using namespace std;
int mergeSort(int n,int arr[]){\
    int mid  = n/2;
    int i = 0;
    while(n>0){
         
    }
}
int main(){

}






























// #include <iostream>
// using namespace std;
// int main() {
//     int n=5;
//     int arr1[n] = {1,2,4,6,7};
//     int arr2[n] = {3,5,8,9,10};
//     int merged[n + n];
//     int i = 0, j = 0, k = 0;
//     while (i < n && j < n) {
//         if (arr1[i] <= arr2[j]) {
//             merged[k++] = arr1[i++];
//         } else {
//             merged[k++] = arr2[j++];
//         }
//     }
//     while (i < n && j<n) {
//         merged[k++] = arr1[i++];
//         merged[k++] = arr2[j++];
//     }
//     for (int i = 0; i < n + n; i++) {
//         cout << merged[i] << " ";
//     }
//     return 0;
// }