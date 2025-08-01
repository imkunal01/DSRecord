#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s = "kanak";
    int start = 0;
    int end = s.size()-1;
    bool flag = false;
    while(start<end){
        if(s[start]!=s[end]){
            flag = true;
        }
        start++,end--;
    }
    if(!flag){
        cout<<"Palindrom"<<endl;
    }
    else{
        cout<<"Not a palindrom"<<endl;
    }
    return 0;
}