#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int count[100];
    int arr[5] = {10,3,4,5,6};
    for (int i = 0; i < 5; i++) {
       if(arr[i]>=x) cout<<arr[i];
    }
    return 0;
}