#include<iostream>
using namespace std;
int countDigit(int n){
    if(n== 0){
        return 0;
    }
    return 1+countDigit(n/10);
}
bool helper(int n,int div){
    if(n<10) return true;
    int l = n/div; //first digit
    int r = n%10; //last digit
    if(l!=r){
        return false;
    }
    n = (n%div)/10;
    return helper(n,div/100);
}
bool isPalindrom(int n){

    if(n<0) return false;
    int digits = countDigit(n);
    int div = 1;

    for(int i = 1;i<digits;i++) div*=10;
    return helper(n,div);
    
}
int main(){
    int num = 1001;
    if(isPalindrom(num)) cout<<true;
    else cout<<false;
}

