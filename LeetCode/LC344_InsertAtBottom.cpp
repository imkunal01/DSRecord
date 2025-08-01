#include <iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
int main() {
    int x = 3;
    stack<int>st;
    st.push(5);
    st.push(5);
    st.push(5);
    st.push(5);

    stack<int>temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}