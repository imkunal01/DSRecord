#include <iostream>
#include <unordered_map>
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
        int findLucky(vector<int>& arr) {
           
        }
    };

int main() {
    int n = 6;
    vector<int> arr = {1, 2, 3, 3, 2, 2};
    
    Solution solution;
    int result = solution.findLucky(arr);
    
    cout << "Element occurring most: " << result << endl;

    return 0;
} 