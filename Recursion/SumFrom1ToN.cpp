#include <iostream>
using namespace std;
void sum1(int n,int sum){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum1(n-1,sum+n);
}
int sum2(int n){
    if(n==0){
        return 0;
    }
    return n+sum2(n-1);
}
int main() {
    sum1(6,0);
    cout<<sum2(6)<<endl;
    return 0;
}