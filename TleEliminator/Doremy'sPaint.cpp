#include<bits/stdc++.h>
using namespace std;

int main(){
    int  t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            v.push_back(ele);
        }
        int sum = 0;
        for(int i=0;i<n-1;i++) sum+=v[i];
            
        for(int i=0;i<n;i++){
            if(v[i] == v[i+1] && v[i+1] == v[i+2]){
                sum -= v[i];
                i+=2;
            }
        }
    }
}