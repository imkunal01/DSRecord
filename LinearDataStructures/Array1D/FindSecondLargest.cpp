#include <iostream>
#include<bits/stdc++.h>
#include<limits>
using namespace std;
int sec(int a[], int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i <n; i++) {
       if(a[i]>max1){
        max2 = max1;
        max1 = a[i];
       }
       else if (max2< a[i] && a[i]!=max1){
        max2 = a[i];
       }
    }return max2;
}
int main() {
    int n;
    cin>>n;
    int a[n];
   for (int i = 0; i <n; i++) {
      cin>>a[i];
   }
   int secmax = sec(a,n);
   if (secmax != INT_MIN) cout<<secmax<<endl;
    return 0;
}