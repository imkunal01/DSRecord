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

int  LCM(int a , int b){
    if(a == 0|| b==0){
        return 0;
    }
    return a/ GCD(a,b)*b;
}
int main(){
    int a = 462;
    int b = 1078;
    // cout<<GCD(a,b);

    cout<<LCM(a,b); // thr stl simple function
    // cout<<__gcd(n,m); // thr stl simple function
}