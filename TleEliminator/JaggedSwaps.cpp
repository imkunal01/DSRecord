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

        if(v[0]  ==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}