#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s = "kunal";
    int start = 0,end = s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<s<<endl;
    return 0;
}