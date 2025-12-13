#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5,6};
    int target = 10;
    int left=0;
    int right= v.size()-1;
    int currsum = 0;
    while(left<right){
        currsum = v[left] + v[right];
        if(currsum == target){
            cout<<"Found the index: "<<v[left]<<" and "<<v[right]<<endl;
        }
        if(currsum>target){
            right--;
        }
        else{
            left++;
        }
    }
    cout<<"The total sum: "<<currsum;
    return 0;
}