#include <iostream>
using namespace std;
#define MAX 100
int main() {
    int arr[MAX] = {1, 2, 3, 4, 5}; 
    int n = 5; 
    int element = 10; 
    // int position = 1;
    arr[n] = element;
    n++;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}