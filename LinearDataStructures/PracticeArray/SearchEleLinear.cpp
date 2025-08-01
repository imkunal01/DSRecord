#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};
    int ele = 5;
    bool f= false;
    for (int i = 0; i< 5; i++) {
        if(arr[i] == ele){
            f = true;
        }
    }
    if(f) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}