#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> FindKdist(vector<int>&nums,int key,int k,int n){
    vector<int>IndexArray;
    for(int i = 0; i < n; i++) {
        if(nums[i] == key) {
            for(int j = max(0, i - k); j <= min(n - 1, i + k); j++) {
                IndexArray.push_back(j);
            }
        }
    }
    sort(IndexArray.begin(), IndexArray.end());
    IndexArray.erase(unique(IndexArray.begin(), IndexArray.end()), IndexArray.end());
    return IndexArray;
}
int main(){
    vector<int> nums= {2,2,2,2,2};
    int key = 2;
    int k =2;
    int n = nums.size();

    for(int i: FindKdist(nums,key,k,n)) {
        cout << i << " ";
    }
}