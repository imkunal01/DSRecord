#include <iostream>
#include<vector>
using namespace std;
int miss(vector<int>v){
    int size = v.size();
    int n = size+1;
    int sum = n*(n+1)/2;
    int act = 0;
    for(int i = 0;i<size;i++){
        act+=v[i];
    }
    int res = sum-act;
    return res;
}

int main() {
    vector<int>v= {1,2,4,5};
    cout<<miss(v)<<endl;    
    return 0;
}