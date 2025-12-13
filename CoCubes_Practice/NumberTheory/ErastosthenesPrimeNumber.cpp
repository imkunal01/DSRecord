#include<bits/stdc++.h>
using namespace std;

void erstho(int n){
    vector<int>v(n+1,true);
    v[0] = false;
    v[1] = false;
    for(int i =2;i*i<n;i++){
        if(v[n] == true){
            for(int j = i;j*j<=n;j+=i){
                v[j] = false;
            }
        }
    }
    for (int p = 2; p <= n; p++) {
        if (v[p])
            cout << p << " ";
    }
}
int main(){
    int n= 12;
    erstho(n);

}

