#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "i am kunal dhangar";
    string ans = "";
    string curr = "";
    int n = s.length();
    for(int i =0;i<n;i++){
        if(s[i] == ' '){
            if(curr.length()>ans.length()){
                ans = curr;
            }
            curr= "";
            
        }
        else curr+=s[i];
    }
    cout<<curr;
}