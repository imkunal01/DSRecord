#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void fun(string s, int l, int r) {
    if (l >= r) {
        cout << "Palindrome";
        return;
    }
    if (s[l] != s[r]) {
        cout << "Not Palindrome";
        return;
    }
    fun(s, l + 1, r - 1);
}
int main(){
    string s = "MADAN";
    int n = s.length();
    int l = 0;
    int r = n-1;
    fun(s, l, r);  
}