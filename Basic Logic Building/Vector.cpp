#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int>v = {1,2,3,4,5,6};
    vector<int>ev;
    vector<int>od;
    vector<int>::iterator it;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            ev.push_back(v[i]);
        }
        else if(v[i]%2!=0){
            od.push_back(v[i]);
        }
    }
    it = find(v.begin(),v.end(),7);
    
    if(it!=v.end()){
        cout<<"Id Found"<<endl;
    }
    else{
        cout<<"Id Not found"<<endl;

    }
        
    cout<<"All Even Id's: ";
    for(int i:ev){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"All Odd Id's: ";
    for(int i:od){
        cout<<i<<" ";
    }

    return 0;
}