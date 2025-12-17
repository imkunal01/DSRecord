
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>cp = a;
        sort(cp.begin(),cp.end());

        if(cp == a || k>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
