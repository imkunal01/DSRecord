#include<iostream>
using namespace std;
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    }
int main(){
    int a =10, b=11;
    swap(&a,&b);
    cout<<a<<endl<<b<<endl;

}