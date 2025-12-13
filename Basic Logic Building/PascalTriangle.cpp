#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal(numRows);
    for(int i=0;i<numRows;i++){
        pascal[i].resize(i+1);
        pascal[i][0]=pascal[i][i]=1;
        for(int j=1;j<i;j++){
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
    }
    return pascal;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans=generate(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}