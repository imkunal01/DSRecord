#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int n = 4;
    int arr[n] = {1,2,4,5};
    int pos = 2;
    int ele = 6;
    for(int i =n-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = ele;
    n++;
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}