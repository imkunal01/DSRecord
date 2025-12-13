#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,2,4,1,2,1,2,4,5,6,7};
    unordered_map<int,int> mp;
    for(int x :v){
        mp[x]++;
    }
    for(int x: v){
        if(mp[x] == 1){
            cout<<x<<" ";
        }
    }
}