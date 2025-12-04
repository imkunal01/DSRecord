#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 1234;
    int org = n;
    int rev = 0;
    while(org>0){
        int last = org%10;
        rev = (rev*10)+last;

        org /=10;
    }
    cout<<rev;
}