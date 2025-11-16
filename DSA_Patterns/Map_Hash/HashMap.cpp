#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string , int> m;

    // insert 1
    pair<string,int> p = make_pair("kunal",1);
    
    // insert 2
    m["deepak"] = 2;

    //  search or access the element

    cout<<m["deepak"]<<" ";
    cout<<m.at("deepak")<<" ";
    cout<<m.size();
}
