#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();

    vector<int> result;

    int maxRight = arr[n - 1];
    result.push_back(maxRight); 


    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {7, 10, 4, 10, 6, 5, 2};
    vector<int> ans = leaders(arr);

    cout << "Leaders: ";
    for (int x : ans) cout << x << " ";
    return 0;
}
