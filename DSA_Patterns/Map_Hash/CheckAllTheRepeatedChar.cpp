#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int>f;
    vector<int>arr = {1,2,3,4,5,6,6,1,2,5,3,1,3,5,6};
    sort(arr.begin(),arr.end());
    for(int n:arr){
        f[n]++;
    }

    vector<int> result;
    for(auto& x: f){
        if(x.second>1){
            result.push_back(x.first);
        }
    }
    sort(result.begin(), result.end());

    for(int n:result){
        cout<<n<<" ";
    }

}
