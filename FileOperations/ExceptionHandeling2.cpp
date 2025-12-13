#include<iostream>
using namespace std;
int divid(int a ,int b){
    if(a == 0){
        throw 1;
    }
    else if(b == 0){
        throw 1;
    }
    else {
        cout<<b/a;
    }
}
int main(){
    int a=2,b=4;
    divid(a,b);
    try{
        divid(a,b);
    }
    catch(int x){
        cout<<"Error: Division by zero is not allowed"<<endl;
    }
}