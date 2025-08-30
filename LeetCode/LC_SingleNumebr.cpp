#include <bits/stdc++.h>
using namespace std;
int  singleNum(vector<int>arr){
    int x = 0;
    for (int i : arr) {
        x ^= i;
    }
    return x;
}
int main(){
    vector<int>arr = {1,2,3,1,2};
    cout<<singleNum(arr);
}