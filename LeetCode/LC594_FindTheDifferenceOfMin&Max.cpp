#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> arr= {1,2,4,5,6};
    int n = arr.size();
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] < min ){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
        if(max-min == )
    }
}