#include <bits/stdc++.h>
using namespace std;

long long consecutiveProduct(vector<int>& nums) {
    long long product = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[i-1] + 1) {
            product *= nums[i];
        } else {
            break;  // stop when streak breaks
        }
    }

    return product;
}

int main() {
    vector<int> nums = {1,2,3,5};
    cout << consecutiveProduct(nums);  // Output: 6
}
