#include <iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
int check(vector<int>v){
    int n = v.size();
    int tsum = 0;
    int lsum = 0;
    for(int i: v){
        tsum += i;
    }
    for(int  i =0;i<n;i++){
        int rsum = tsum - lsum - v[i];
        if (lsum == rsum) {
            return i + 1;
        }

    lsum += v[i];
    }
    return -1;
}
int main() {
    vector<int>v = {1,2,3,4,5,6};
    cout<<check(v);
    return 0;
}