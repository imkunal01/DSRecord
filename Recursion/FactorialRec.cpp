#include <iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
int p(int n){
    if(n==0) return 0 ;
    p(n-1);
    cout<<n<<" ";
}
int rev(int n){
    if(n==0) return 0 ;
    cout<<n<<" ";
    rev(n-1);
}
int main() {
    int n = 5;
    cout<<fact(n)<<" ";
    cout<<endl;
    rev(n);
    cout<<endl;
    p(n);
    return 0;
}