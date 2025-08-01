#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s = "abcabcbb";
    string temp = "";
    vector<int> lastIndex(256, -1); // To store the last index of each character
    int start = 0;

    for(int i = 0; i < s.length(); i++){
        if(lastIndex[s[i]] >= start){
            start = lastIndex[s[i]] + 1;
        }
        lastIndex[s[i]] = i;
        if (i - start + 1 > temp.length()) {
            temp = s.substr(start, i - start + 1);
        }
    }
    cout << temp.length();
}