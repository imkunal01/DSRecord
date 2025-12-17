#include<bits/stdc++.h>
using namespace std;

int main(){
        int n,k;
        cout<<"enter the size: ";
        cin>>n;
        cout<<"enter the road lenth: ";
        cin>>k;
        cout<<"enter the array Ele: ";
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int res= k-n;
        for(int i =1;i<n;i++){
            if(i%2 ==1){
                res-=1;
            }
            else if(i%2==0){
                res+=1;
            }
        }
        cout<<res;
}