#include<iostream>
using namespace std;
int main(){
    int x = 34433443;
    int rev= 0;
    int org = x;
    bool flag = false;
    while(x>0){
        int rem = x%10; // get the last digit
        rev = rev*10 + rem; // add the last digit to the reversed number
        x = x/10; // removes the last digit
    }
    if(rev== org){
        cout<<"palindrom hai boss";
    }
    else{
        cout<<"ye to palindrom nhi hai ";
    }
}