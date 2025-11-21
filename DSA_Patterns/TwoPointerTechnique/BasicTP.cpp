#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v= {1,2,4,7,11};
    int t = 9;
    int l = 0;
    int r = v.size()-1;
    bool found = false;
    while(l<r){
        if(v[l]+v[r] == t){
            found = true;
            break;
        }
        else if(v[l]+v[r] <t){
            l++;
        }
        else r--;

    }
    if(!found)cout<<"oops not here.."<<endl;
    else cout<<"Yup got it.."<<endl;
}