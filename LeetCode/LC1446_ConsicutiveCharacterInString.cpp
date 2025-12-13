#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abbcccddddeeeeedcba";
    int n = s.length();
    int count = 0,MaxC = 0;
    for(int i = 0;i<n;i++){
        if(i > 0 && s[i] == s[i-1]){
            count++;
            MaxC = max(MaxC,count);
        }
        else count = 0;
    }
    cout<<MaxC+1;
}