#include <iostream>
using namespace std;
int sorted(int arr[]){
    for (int i = 0; i < 5; i++) {
        int mini= i;
       for (int j = i+1; j < 5; j++) {
        if(arr[j]<arr[mini]) mini = j;
       }
       int temp = arr[mini];
       arr[mini] = arr[i];
       arr[i] = temp;
       
    }
}
int main() {
    int arr[5] = {6,7,8,4,5};
    sorted(arr);
    for (int i = 0; i < 5; i++) {
       cout<<arr[i]<<endl;
    }
    return 0;
}