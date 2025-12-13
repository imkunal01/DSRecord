#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<5;i++){
        if(v[i]<min) min = v[i];
        if(v[i]>max) max = v[i];
    }
    cout<<"Minimum: "<<min<<endl;
    cout<<"Maximum: "<<max<<endl;

}