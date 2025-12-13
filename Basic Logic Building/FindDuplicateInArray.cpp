#include <iostream>
#define MAX 100
using namespace std;
int n = 5;
int main() {
    int arr[n] = {4,4,2,4,4};
    for (int i = 0; i<n; i++) {
        for (int j =i+1; j<n; j++) {
            if (arr[i] == arr[j]) {
                cout<<arr[i]<<endl;
            
            }
            break;
        }
        break;
    }
    return 0;
}