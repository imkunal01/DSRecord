#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,r,z;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;
    try{
        d=a-b;
        cout<<a<<" "<<b;
        if(z==0){
            throw 1;
        }
        else{
            r=c/d;
            cout<<"result is: "<<r<<endl;
        }
    }
    catch(int x){
        cout<<"invalid: division by 0"<<endl;
    }
    cout<<"some statements after"<<endl;
}



