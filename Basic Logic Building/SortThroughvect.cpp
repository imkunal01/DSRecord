#include <iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
int sort12(vector<int> v){
    sort(v.begin(),v.end());
    return v;
}
int main() {
    vector<int> v = {1,0,0,1,0,2,2};
    cout<<sort12(v);
    return 0;
}