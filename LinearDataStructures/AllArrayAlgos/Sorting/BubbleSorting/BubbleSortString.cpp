// Decending Bubble sort Algo
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
int main() {
    string s = "HJKWEILMNOPQRSTUVXYZACBD";
    string str = "";
    for (int i = 0; i<s.size(); i++){
        if(s[i]>='A') str.push_back(s[i]);
    }
    sort(str.begin(),str.end());
    cout<<str<<" ";
    cout<<endl;
}   