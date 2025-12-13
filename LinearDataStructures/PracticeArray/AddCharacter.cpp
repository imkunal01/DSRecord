#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<char>v = {'a','b','c'};
    v.insert(v.begin(),'i');
    for(char i :v){
        cout<<i<<" ";
    }

    return 0;
}