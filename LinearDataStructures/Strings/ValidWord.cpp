#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s = "aya";
    int n = s.length();
    string vowl= "aioue";
    string cons = "bcdfghjklmnpqrstwxyz";
    string nums = "0123456789";
    bool flag = false;
    for(char ch : s){
        ch = toupper(ch);
        if(vowl.find(ch) != string::npos || cons.find(ch)!= string::npos||nums.find(ch)!= string::npos){
            flag = true;
            cout<<"valid";
            break;
        }else{
            flag = false;
            break;
        }
    }
    if(!flag){
        cout<<"Not valid";
    }

    return 0;
}