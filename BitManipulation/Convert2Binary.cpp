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
    cout<<ConverToBinary(n);

}