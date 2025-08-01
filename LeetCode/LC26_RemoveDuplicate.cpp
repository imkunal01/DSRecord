#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int n = nums.size();
    int i = 0, j = 1;
    while (j < n) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    return i + 1;
}

int main(){
    vector<int> nums = {1, 1, 2};
    int k = removeDuplicates(nums);
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}