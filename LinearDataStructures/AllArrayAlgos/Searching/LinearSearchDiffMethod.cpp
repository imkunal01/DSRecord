#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};
    int item = 5;
    int loc = -1;
    for (int i = 0; i < 5; i++){
        if(arr[i] ==item ){
            loc = i;
            break;
        }
    }
    if(loc!= -1){
        cout<<"Item Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    
    return 0;
}