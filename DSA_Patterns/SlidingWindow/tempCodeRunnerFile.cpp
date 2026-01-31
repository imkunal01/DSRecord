#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int l = 0;
    int maxlen = 0;
    int sum = 0;
    int target = 14;

    for (int r = 0; r < n; ++r) {
        sum += arr[r];
        while (sum > target) {
            sum -= arr[l];
            l++;
        }
        maxlen = max(maxlen, r - l + 1);
    }
    cout << maxlen << endl;
    return 0;
}