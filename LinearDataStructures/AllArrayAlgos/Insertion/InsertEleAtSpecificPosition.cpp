#include <iostream>
using namespace std;

int insert(int arr[],int n,int pos,int ele){
    for (int i =n-1; i>=pos; i--) {
        arr[i+1] = arr[i];
    }
    arr[pos] = ele;
    n++;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; 
    int n = 5; 
    int ele = 10; 
    int pos = 3;
    insert(arr,n,pos,ele);
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    return 0;
}