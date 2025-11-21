#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>mp;
    int t = 9;
    vector<int>v = {2,7,11,15};
    for(int i = 0;i<v.size();i++){
        int rem = t-v[i];
        if(mp.count(rem)) {
            vector<int> ans = {mp[rem],i};
            return 0;
        }
        mp[v[i]] = i;
    }
    return 0;
}
