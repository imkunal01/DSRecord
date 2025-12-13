#include<bits/stdc++.h>

using namespace std;
int main(){
    int max = INT_MIN;
    int min = INT_MAX;
    int MaxEle = 0;
    int MinEle = 0;
    vector<int>v = {2,3,1,6,2,7};
    sort(v.begin(),v.end());
    cout<<v.back()<<endl;
    cout<<v.front()<<endl;
    int n = v.size();
    for(int i =0;i<n;i++){
        if(v[i]>max){
            MaxEle = v[i];
        }
    }

    cout<<MaxEle<<endl;
    cout<<MinEle<<" ";
}