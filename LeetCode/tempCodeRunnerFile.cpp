#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        int findLucky(vector<int>& arr) {
            int n = arr.size();
            unordered_map<int, int> freq;
            for (int i: arr) {
                freq[i]++;
            }
            int lucky = -1;
            for( auto &pair : freq){
                int key = pair.first;
                int value = pair.second;
                if(key == value) lucky = max(lucky,key);
            }
            return lucky;
        }
    };

int main() {
    int n = 6;
    vector<int> arr = {1, 2, 3, 3, 2, 2};
    
    Solution solution;
    int result = solution.findLucky(arr);
    
    cout << "Lucky integer: " << result << endl;

    return 0;
} 