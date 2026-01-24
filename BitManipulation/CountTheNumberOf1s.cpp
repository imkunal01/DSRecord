#include<bits/stdc++.h>
using namespace std;

bool issorted(vector<int>& arr) {
    bool isSorted = false;
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]){
            isSorted = true;
        }
        else{
            isSorted = false;
        }
    }
    return true;
}

int main(){
    vector<int>arr = {10,20,30,40};

    cout<<issorted(arr);
    // int n =11;
    // int count1 = 0;
    // int count0 = 0;
    // string s = bitset<32>(n).to_string();
    // for(char c:s){
    //     if(c=='1') count1++;
    //     else count0++;
    // }
    // cout<<count1;
    // cout<<endl<<count0;
}