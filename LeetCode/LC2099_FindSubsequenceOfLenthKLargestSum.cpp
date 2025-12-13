// 2099. Find Subsequence of Length K With the Largest Sum

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int> v = {-1,-2,3,4};
    int k = 3;
    int n = v.size();

    // Pair each element with its index
    vector<pair<int, int>> paired;
    for (int i = 0; i < n; i++) {
        paired.push_back({v[i], i});
    }

    // Sort by value in descending order
    sort(paired.rbegin(), paired.rend());

    // Select the top k elements and store their indices
    vector<int> indices;
    for (int i = 0; i < k; i++) {
        indices.push_back(paired[i].second);
    }

    // Sort the indices to maintain the original order
    sort(indices.begin(), indices.end());

    // Build the result subsequence
    vector<int> result;
    for (int idx : indices) {
        result.push_back(v[idx]);
    }

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}