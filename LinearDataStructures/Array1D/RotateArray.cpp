#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int k;
    cin>>k;
    k = k % n; // in case k is greater than n
    // Rotate the array (right rotate by k)
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        v[(i + k) % n] = arr[i];
    }

    // Print the rotated array
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}