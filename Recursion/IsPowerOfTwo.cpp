#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    if(n<0){
        return 0;
    }
    double x = log2(n);
    return floor(x)==ceil(x);
}
bool isPowerOfTwoRec(int n){
    if(n==1) return 1;
    if(n==0 || n%2!=0) return 0;
    return isPowerOfTwoRec(n/2);
}
int main(){
    int n = 16;
    cout<<isPowerOfTwo(n)<<endl;
    cout<<isPowerOfTwoRec(n)<<endl;
}