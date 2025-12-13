#include <iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
int main() {
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"Top Ele: "<<s.top()<<endl;
    s.pop();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"Top Ele: "<<s.top()<<endl;
    return 0;
}