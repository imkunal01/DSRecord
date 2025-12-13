#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 1234;
    int org = n;
    int sum = 0;
    while(org>0){
        int last = org%10;
        sum+=last;
        org/=10;
    }
    cout<<sum;
}