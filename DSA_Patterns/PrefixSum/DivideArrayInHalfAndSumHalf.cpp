#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v = {1,2,3,4,1,2,3,4};
    int n = v.size();
    int total = 0;
    int prefix = 0;
    // int half= 0;
    bool found = false;
    for(int i = 0;i<n;i++) total += v[i];
    // hard coded check only from middle
    // for(int i=0;i<n/2;i++){
    //     half+=v[i];
    // }
    // if(total == 2*half){
    //     cout<<"2no half ka sum equal hai";
    // }
    // else{
    //     cout<<"nhi alag hai";
    // }
    for(int i = 0;i<n;i++){
        prefix +=v[i];
        if(total == 2*prefix) {
            cout<<"Haa bhai possible hai";
            found = true;
            break;}
    }
    if(!found){
        cout<<"Nhi hota aisa bhai";
    }   
    return 0;
}

