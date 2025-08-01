#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m = 2;
    int n = 2;
    int tot = m+n;
    vector<int> arr1 = {1, 2};
    vector<int> arr2 = {3, 4};
    vector<int> arr3(m + n);

    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n; i++) {
        arr3[n + i] = arr2[i];
    }   

    double sum = 0;
    for (int i = 0; i < tot; i++) {
        sum += arr3[i];
    }
    float res = sum / tot;
    cout << res;

    return 0;
}