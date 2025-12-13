#include <iostream>
#include<vector>
using namespace std;
void vect(vector<int>&v){
    for (int i = 0; i <= v.size(); i++) {
       cout<<v[i]<<" ";
    }
}
int main() {
    vector<int> v;
    int elesize = 5,elements;
    for (int i = 0; i <elesize-1; i++) {
        cin>>elements;
        v.push_back(elements);
    }
    vect(v);
    return 0;
}