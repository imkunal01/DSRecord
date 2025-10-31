#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int> v ={5,6,7,4,2,7,5,};
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        if(v[i] == v[i-1]){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}