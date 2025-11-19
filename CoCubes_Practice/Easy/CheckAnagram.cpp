#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "aacc";
    string b = "ccac";
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b){
        cout<<true;
    }
    else cout<<false;
}