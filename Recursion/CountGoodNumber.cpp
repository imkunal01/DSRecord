#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
long long powerCount(long long base, long long exp){
    long long res = 1;
    while(exp>0){
        if(exp%2 == 1){
            res = (res*base)%MOD;
        }
        base = (base*base) %MOD;
        exp/=2;
    }
    return res;
}
long long countGoodNum(long long n){
    long long even = (n+1)/2;
    long long odd = n/2;
    long long evenCount = powerCount(5,even);
    long long oddCount = powerCount(4,odd);
    return (evenCount*oddCount)% MOD;

}
int main(){
    int n = 2;
    cout<<"Achhi Sankhya hai: "<<countGoodNum(n);
}
// this is not recursivly 
