#include<iostream>
using namespace std;
int main(){
    int a =10,b=11;
    int temp;
    temp = a;
    
    a = b;
    b = temp;
    cout<<a<<endl<<b<<endl;

    // without creating extra variable
    int x =10,y=11;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<a<<endl<<b;

}