#include<bits/stdc++.h>
using namespace std;
int GCD(int a , int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int main(){
    int a = 462;
    int b = 1078;
    cout<<GCD(a,b);
    // cout<<__gcd(n,m); // thr stl simple function
}