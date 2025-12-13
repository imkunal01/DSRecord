#include <bits/stdc++.h>
using namespace std;
bool isPowerOfThree(int n){
    if(n<=0) return 0;
    while(n%3==0){
        n/=3;
    }
    return n == 1;
}
bool isPowerOfThreeRec(int n){
    if(n==1) return 1;
    if(n==0 || n%3 !=0) return 0;
    return isPowerOfThreeRec(n/3);
}
int main(){
    int n = 9;
    cout<<isPowerOfThree(n)<<endl;
    cout<<isPowerOfThreeRec(n);
}