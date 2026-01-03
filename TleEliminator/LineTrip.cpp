#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n;
        cin>>k;
        vector<long long> a;
        a.push_back(0);
        for(int i=0;i<n;i++){
            long long p;
            cin>>p;
            a.push_back(p);
        }

        a.push_back(k);
        n=a.size();
        long long res = INT_MIN;
        for(int i =1;i<n;i++){
            if(i==n-1) res = max(res , 2*(a[i] -a[i-1]));
            else res = max(res , a[i] -a[i-1]);
        }
        cout<<res<<endl;
    }
}
