#include <iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
    int n;
    n = 5;
    int arr[n] = {1,3,-2,4,-3};
    vector<int>v;
    stack<int>st;
    for(int i = 0; i < n; i++){
        if(st.empty()){
            st.push(arr[i]);
        }
        else if(arr[i]>=0){
            if(st.top()>=0){
                st.push(arr[i]);
            }
            else{
                st.pop();

            }
        }
        else{
            if(st.top()<0){
                st.push(arr[i]);
            }
            else{
                st.pop();
            }
        }
    }
    int i = st.size()-1;
    while(st.empty()){
        v[i] = st.top();
        i--;
    }
    return 0;
}