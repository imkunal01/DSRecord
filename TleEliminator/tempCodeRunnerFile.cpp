#include<bits/stdc++.h>
using namespace std;

int main(){
    // int  t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            v.push_back(ele);
        }
        sort(v.begin(),v.end());
        for(int i =0;i<n;i++){
            cout<<v[i];
        }
        for(int i= 0;i<n;i++){
            if(n == v[i]){
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
        }

    // }
}