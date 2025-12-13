#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int ele = 5;
    int left = 0;
    int right = n-1;
    int mid;
    bool flag = false;
    while(left<=right){
        mid = left+(right-left)/2;
        if(arr[mid] == ele){
            flag = true;
            break;
        }
        if(arr[mid]<ele){
            left = mid+1;

        }
        else{
            right= mid-1;
        }

    }
    if(flag) cout<<"yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}