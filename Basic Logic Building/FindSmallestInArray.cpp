#include <iostream>
#include<limits.h>
#include<string>
#include<algorithm>
using namespace std;
float findSmallest(float arr[], int size) {
    float smallest = numeric_limits<float>::max();
    for (int i = 0; i < size; i++) {
        if (smallest > arr[i]) {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main() {
    int a = INT_MAX;
    int arr1[5] = {1,2,3,4,5};
    for (int i = 0; i< 5; i++) {
        if(a>arr1[i]) a = arr1[i];
    }
    cout<<a<<endl;

    int a1 = INT_MIN;
    int arr2[5] = {1,2,3,4,5};
    for (int i = 0; i< 5; i++) {
        if(a1<arr2[i]) a1 = arr2[i];
    }
    cout<<a1<<endl;

    float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};   
    int size = 5;

    float smallest = findSmallest(arr, size);

    cout << "Smallest float value: " << smallest << endl;
}