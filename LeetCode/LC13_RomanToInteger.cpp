#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int getvalue(char roman){
    switch(roman){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
int RtoI(const string s){
    int res = 0;
    for(int i = 0;i<s.length();i++){
        int curr = getvalue(s[i]);
        int next = (i+1<s.length()? getvalue(s[i+1]):0);
        if(curr<next){
            res -= curr;
        }
        else{
            res += curr;
        }
    }
    return res;
}
int main() {
    string roman  = "XI";
    cout << RtoI(roman) << endl;
    return 0;
}