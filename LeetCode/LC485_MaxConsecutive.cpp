#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1,0,0,1,1,0};
    int n = v.size();
    int count = 0, maxCount = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 1){
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    cout << maxCount;
}