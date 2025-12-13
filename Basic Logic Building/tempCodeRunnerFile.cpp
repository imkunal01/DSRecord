#include<iostream>
#include<vector>
using namespace std;
int main(){
    // pascal triangle you have give a number n you have to provide array of n rows with pascal triangle take vector instead of normal array
    int n;
    cin>>n;
    vector<vector<int>> pascal(n);
    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);
        pascal[i][0]=pascal[i][i]=1;
        for(int j=1;j<i;j++){
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<pascal[i].size();j++){
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
}