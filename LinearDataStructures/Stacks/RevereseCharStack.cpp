#include <iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int main() {
    stack<char> st;
    vector<char> v = {'k','u','n','a','l'};
    for (int i = 0; i<v.size(); i++) {
        st.push(v[i]);
    }
    int i = 0;
    while(!st.empty()){
        v[i] = st.top();
        st.pop();
        i++;
    }
    for (int i = 0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}