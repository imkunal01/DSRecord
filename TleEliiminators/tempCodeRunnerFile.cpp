#include<bits/stdc++.h>
using namespace std;

int main(){
        int n,k;
        cin>>n;
        cin>>k;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long res = INT_MIN;
        for(int i =1;i<n;i++){
            if(i==n-1) res = max(res , 2*(a[i] -a[i-1]));
            else res = max(res , a[i] -a[i-1]);
        }
        cout<<res;
}