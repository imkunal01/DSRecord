#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>v = {1,2,3,4,5};
    v.insert(v.begin()+4,3);
    
    for (int i :v) {
        cout<<i<<endl;
    }
    return 0;
}