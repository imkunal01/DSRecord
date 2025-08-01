#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n = 5;
    vector<int> v = {1,5,4,2,3};
    sort(v.begin(),v.end());
    for (int i = 0; i<5; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //decending order
    sort(v.begin(),v.end(),greater<int>());
    for (int i = 0; i<5; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}