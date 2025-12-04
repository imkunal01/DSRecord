#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {1,2,3,4,5,6};
    int r= 0;
    int l = 0;
    int maxlen = 0;
    int sum = 0;
    int target = 14;
    while(l<r){
        sum = sum+arr[r];
        if(sum>target){
            sum = sum-arr[l];
            l++;
        }
        if(sum<=target){
            maxlen = max(sum,r-l+1);
            r++;
        }
    }
    cout<<maxlen;
}