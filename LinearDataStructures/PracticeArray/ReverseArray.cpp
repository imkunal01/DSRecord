#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n = 5;
    vector<int> v = {1,2,3,4,5};
    reverse(v.begin(),v.end());
    for (int i = 0; i<5; i++) {
        cout<<v[i]<<endl;
    }
    return 0;
}