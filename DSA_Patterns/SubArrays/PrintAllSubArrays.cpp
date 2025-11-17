#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5,6};
    int n = v.size();
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            for(int k = i;k<j;k++){
                cout<<v[k]<<" ";
            }
            cout<<endl;
        }
    }
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