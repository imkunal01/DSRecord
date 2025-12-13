#include<iostream>
using namespace std;
int fibo(int n){
    for(int i = 0,a = 0,b=1,temp=1;i<=n;b+=a,a=b-a,i++){
        cout<<a<<endl;
    }
}
int main(){
    // int a = 0,b = 1;
    // for (int i = 0; i< 5; i++) {
    //     b = b+a;
    //     a = b-a;
    //     cout<<a<<endl;
    // }
     fibo(7);
}
