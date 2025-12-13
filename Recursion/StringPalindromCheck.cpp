#include<iostream>
#include<string.h>
using namespace std;

bool CheckPalindrom(string s,int l,int r){
    int n = s.length();
    if(l>=r){
        return true;
        
    }
    if(s[l]!=s[r]){
        return false;
    }
    return CheckPalindrom(s,l+1,r-1);
}

// bool NumPalindrom(int n){
//     int org = n;
//     int rev = 0;

//     while(n>0){
//         int rem = n%10;
//         rev = rev*10+rem;
//         n = n/10;
//     }
//     if(org == rev) return true;
    
//     else return false;
// }



int main(){
    string s = "abb";
    int n=s.length();
    int l = 0;
    int r = n-1;
    int num = 1221;
     cout<<CheckPalindrom(s,l,r);
    //  cout<<NumPalindrom(num);

}