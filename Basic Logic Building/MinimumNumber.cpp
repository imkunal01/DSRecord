#include <iostream>
#include<limits.h>
using namespace std;
int minimum(int a,int b){
    if(a<b) return a;
    return b;
}
int main() {
    int arr[5] = {3,4,5,2,9};
    int min = INT_MAX;
    for (int i = 0; i <=5; i++) {
       min = minimum(arr[i],min);
    }
    cout<<min<<endl;
    return 0;
}