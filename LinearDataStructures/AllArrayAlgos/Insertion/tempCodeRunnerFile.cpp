// #include <iostream>
// #include<string>
// #include<algorithm>
// #include<stack>
// #include<queue>
// #include<vector>
// using namespace std;
// int main() {
//     vector<char> v;
//     int n = 3;
//     char ele;
//     for(int i = 0;i<n;i++){
//         cin>>ele;
//         v.push_back(ele);
//     }
//     reverse(v.begin(),v.end());
//     for(char i:v){
//         cout<<i<<" ";
//     }
//     return 0;
// }
// You are using GCC
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int ele;
    for(int i =0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }for(int i = 0;i<n;i++){
        if(v[i]==0){
            v.erase(v.begin()+i);
        }
    }
    for(int i:v){
        cout<<i<<" ";
    }
}