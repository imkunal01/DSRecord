#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main(){
    vector<string> arr = {"kunal", "rocks", "code"};
    for(string &s : arr){
        for(char &ch: s){
            ch = static_cast<char>(toupper(static_cast<unsigned char>(ch)));
        }
    }
    for(const string &i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}