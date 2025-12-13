#include <bits/stdc++.h>
#include<cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int maxFreq(string s){
    unordered_map<char,int>freq;
    for(char c:s){
        if(isalpha(c)){
            char ch = tolower(c);
            freq[ch]++;
        }
    }
    int maxv = 0;
    int maxc= 0;

    for(auto &p:freq){
        if(isVowel(p.first)){
            maxv=max(maxv,p.second);
        }
        else{
            maxc = max(maxc,p.second);
        }
    }
    return maxc+maxv;
}
int main(){
    string s = "aeiaeia";
    cout<<maxFreq(s);

}