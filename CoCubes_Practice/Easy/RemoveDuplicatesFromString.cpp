#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v(256,0);
   string s = "aabbccddee";
   string res;
   for(int c:s){
    if(!v[c]){
        res+=c;
        v[c] = 1;
    }
   }
   cout<<res;
}