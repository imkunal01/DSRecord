#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1,2,3,1,2};
    int hashh[4] = {0};
    for(int i = 0;i<n;i++){
        hashh[arr[i]]++;
    }
    int q = 4;
    while(q--){
        int num;
        cin>>num;
        if(num >= 0 && num <= 3)
        cout<<hashh[num];
        else
            cout<<0;
    }
}