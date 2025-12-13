#include <bits/stdc++.h>
using namespace std;
string ConverToBinary(int n){
    string res = "";
    while(n>0){
        if(n%2==1) res="1"+res;
        else res="0"+res;
        n/=2;
    }
    // reverse(res.begin(),res.end());
    return res;
}


int main(){
    int n = 13;
    vector<int>arr= {1,2,1,2,8};
    cout<<ConverToBinary(n)<<endl;
    // cout<<singleNum(arr);
    // cout << bitset<4>(n);

}