#include<bits/stdc++.h>
using namespace std;

int main(){
   string s = "aioue";
   string vowl = "aioueAIOUE";
   int c = 0;
   for(int i = 0 ;i<s.size();i++){
        for(int j = 0;j<s.size();j++){
            if(s[i]==vowl[j]){
                c++;
            }
        }
   }
    string v = "aeiouAEIOU";
    int cnt = 0;
    for(char c: s) if(v.find(c) != string::npos) cnt++;


   cout<<c<<endl;
   cout<<cnt;
}

