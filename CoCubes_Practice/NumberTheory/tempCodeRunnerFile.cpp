#include<bits/stdc++.h>
using namespace std;
int main(){
     int n = 12;
     int sum = 0;
     for(int i = 1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            sum+=i;
        }
     }
     cout<<sum;
     
}

