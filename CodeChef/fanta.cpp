#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "fonta";
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[n-1] == 'a' && s[n-2] == 't' && s[n-3] == 'n'){
            cout<<"YES";
            break;
        }
        else{
            cout<<"NO";
            break;
        }
}   
    return 0;
}