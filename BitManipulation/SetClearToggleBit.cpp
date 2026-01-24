#include<bits/stdc++.h>
using namespace std;
 int hammingWeight(int n) {
        int count = 0;
        string s = bitset<32>(n).to_string();
        for (char c : s) {
            if (c == '1')
                count++;
        }
        return count;
    }
int main(){
    int n = 5;
    vector<int>v(n+1,0);
    for(int i =0;i<=n;i++){
        if(i%2!=0){
            v[i]=v[i/2]+1;
        }
        else{
            v[i]=v[i/2];
        }
    }
    for(int i =0;i<=n;i++){
        cout<<v[i]<<" ";
    }
}
