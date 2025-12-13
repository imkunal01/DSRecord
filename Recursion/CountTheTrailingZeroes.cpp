#include <bits/stdc++.h>
using namespace std;
int facto(int n){
    if(n==0) return facto(n*(n-1));
    // return facto(n*n-1);
}
int main()
{   
    int n = 5;
    int count = 0;
    int rev = 0;
    int org = n;
    cout<<facto(n);
    // while (n > 0){
    //     int digit = n%10;
    //     n /= 10;
    //     if ()
    // }
}