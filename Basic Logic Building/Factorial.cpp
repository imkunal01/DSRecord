#include<iostream>
using namespace std;
int fact(int a){
    int facto = 1;
    for (int i = 1; i <=a; i++)
    {
        facto*=i;
    }
    return facto;
    
}
int main(){
    int a;
    cin>>a;
    cout<<fact(a)<<endl;
}