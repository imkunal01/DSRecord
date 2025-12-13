#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};
    
    vector<vector<int>> subsets;
    
    subsets.push_back({});
    
    for (int num : arr) {
        int size = subsets.size();
        for (int i = 0; i < size; i++) {
            vector<int> newSubset = subsets[i]; 
            newSubset.push_back(num);           
            subsets.push_back(newSubset);       
        }
    }
    
    for (auto &subset : subsets) {
        cout << "{ ";
        for (int x : subset) cout << x << " ";
        cout << "}\n";
    }
    
    return 0;
}
