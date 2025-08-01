#include <iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
int StringManipulation(vector<string>v){
    stack<string>st;
    for(int i = 0;i<v.size();i++){
        if((st.empty())){
            st.push(v[i]);
        }
        else if(st.top() == v[i]){
           st.pop();  
        }  
        else{
            st.push(v[i]);
        }
    }
    return st.size();
}
int main() {
    vector<string> v = {"as", "da", "fa", "ad"};
    cout<<StringManipulation(v);
    return 0;
}