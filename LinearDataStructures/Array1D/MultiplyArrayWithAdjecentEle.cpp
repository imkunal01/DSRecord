#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    
    for (int i = 0;i < n; i++) {
        if (i == 0) {
            cout<<arr[i] * arr[i+1]<<" ";
        } else if (i == n - 1) {
            cout<<arr[i-1] * arr[i]<<" ";
        } else {
            cout<<arr[i-1] * arr[i+1]<<" ";
        }
    }
    
    return 0;
}
// NeoCollab cpp