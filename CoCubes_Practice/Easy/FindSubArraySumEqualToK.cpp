#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5,6};
    bool flag = false;
    int k = 20;
    int n = v.size();
    for(int i = 0;i<n;i++){
        int current = 0;
        for(int j = i;j<n;j++){
            current += v[j];
            if(current == k){
                flag = true;
            }
        }
        cout<<current<<" ";
    }
    if(!flag) cout<<"Not equal to subarray.."<<endl;
    else cout<<"Equal hai..";
}





// output
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

// 2 
// 2 3 
// 2 3 4 
// 2 3 4 5 

// 3
// 3 4
// 3 4 5

// 4
// 4 5

// 5