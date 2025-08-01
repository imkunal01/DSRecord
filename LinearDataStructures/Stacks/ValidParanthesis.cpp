#include <iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
bool ValidPar(string s){
    stack<char>st;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        st.push(s[i]);
        if ((s[i] == ')' && st.top() != '(') ||
                (s[i] == '}' && st.top() != '{') ||
                (s[i] == ']' && st.top() != '[')) {
                return false;
            }
        st.pop();
        return st.empty();
    }
}
using namespace std;
int main() {
    string s = "{[()]}";
    if (ValidPar(s)) {
        cout << "Valid parentheses" << endl;
    } else {
        cout << "Invalid parentheses" << endl;
    }
    return 0;
}