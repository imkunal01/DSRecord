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
string ConvertToBinaryBitOps(unsigned int n) {
    if (n == 0) return "0";
    string res;
    while (n) {
        res.push_back((n & 1u) ? '1' : '0');
        n >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}

// Fixed-width variant using std::bitset (trim leading zeros)
template <size_t W = 32>
string ConvertToBinaryBitset(unsigned int n) {
    string s = bitset<W>(n).to_string();
    auto pos = s.find('1');
    return (pos == string::npos) ? "0" : s.substr(pos);
}

