#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v =  {1,2,3,4,5};
    int n = v.size();
    int i = 0;
    int j = n-1;

    while(i<j){
        while(i<j && v[i]% 2==0){
            i++;
        }
        while(i<j &&v[j]% 2==1){
            j--;
        }
        swap(v[i],v[j]);
    }
    for(int i:v){
        cout<<i<<" ";
    }
}