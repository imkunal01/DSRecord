#include<iostream>
#include<algorithm>
using namespace std;
void rev(int arr[], int l, int r){
    if(l >= r){
        return;
    }
    swap(arr[l], arr[r]);
    rev(arr, l+1, r-1);
}
int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int l = 0;
    int r = n-1;
    rev(arr, l, r);
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

} 