#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    // Enter target
    int t, s;
    cin >> t;
    // Enter size
    cin >> s;
    for (int i = 0; i < s; i++) {
        int inp;
        cin >> inp;
         v.push_back(inp);
    }

    for (int i = 0; i < s; i++) {
        for (int j = i + 1; j < s; j++) {
            if (v[i] + v[j] == t) {
                cout << i << "," << j << endl;
            }
        }
    }
         // class Solution {
         // public:
         //    vector<int> twoSum(vector<int>& nums, int target) {
         //       vector<int>v;
         //       int n = nums.size();
               
         //       for (int i = 0; i < n; i++) {
         //             for (int j = i + 1; j < n; j++) {
         //                if (nums[i] + nums[j] == target) {
         //                   v.push_back(i);
         //                   v.push_back(j);
         //                   return v;  
         //                }
         //             }
         //       }
               
         //       return v;
         //    }
         // };
    return 0;
}
