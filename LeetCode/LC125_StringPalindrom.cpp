#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string s = "A man, a plan, a canal: Panama";
    string filtered = "";

    // Remove non-alphanumeric characters and convert to lowercase
    for(char c : s){
        if(isalnum(c)){
            filtered += tolower(c);
        }
    }

    int len = filtered.length();
    bool isPalindrome = true;
    for(int i = 0; i < len / 2; i++){
        if(filtered[i] != filtered[len - i - 1]){
            isPalindrome = false;
            break;
        }
    }

    cout << (isPalindrome ? "palindrome" : "not palindrome");
    return 0;
}