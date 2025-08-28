#include<iostream>
#include<string.h>
using namespace std;

bool CheckPalindrom(string s){
    if(s.length() == 0){
        return 0;
    }

    // CheckPalindrom()
}

int rev(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    rev(n-1);
}

int main(){
    int n=5;
    rev(n);
}