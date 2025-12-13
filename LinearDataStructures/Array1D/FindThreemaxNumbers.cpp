#include <iostream>
#include<limits.h>
using namespace std;
int threemax(int arr[]){
    int m1 = INT_MIN,m2 = INT_MIN,m3 = INT_MIN;
    for (int i = 0; i < 5; i++) {
       if(arr[i]> m1){
       m3 = m2;
       m2 = m1;
       m1 = arr[i];
       }
       else if(arr[i]> m2){
        m2 =m1;
        m1=arr[i];
       }
       else if(arr[i]>m3)
       m3 = arr[i];
    }
    if(m1 == INT_MIN)cout<<"Max1: "<<endl;
    else cout<<m1<<endl;

    if(m2 == INT_MIN)cout<<"Max2: "<<endl;
    else cout<<m2<<endl;

    if(m3 == INT_MIN)cout<<"Max3: "<<endl;
    else cout<<m3<<endl;
}
int main() {
   int arr[5] = {12,31,34,53,32};
   threemax(arr);
   return 0;
}