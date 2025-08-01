#include <iostream>
#include <vector>
#include<algorithm>

std::vector<int> beautifulArray(int n) {
    // Create a vector of numbers from 1 to n
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        nums[i] = i + 1;
    }
    
    // Sort the vector in ascending order
    std::sort(nums.begin(), nums.end());
    
    // Initialize an empty vector to store the beautiful array
    std::vector<int> beautiful;
    
    // Iterate over the sorted vector and add every other number to the beautiful array
    for (int i = 0; i < n; i += 2) {
        beautiful.push_back(nums[i]);
    }
    
    // Return the beautiful array
    return beautiful;
}

// Example usage:
int main() {
    int n = 4;
    std::vector<int> result = beautifulArray(n);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    n = 5;
    result = beautifulArray(n);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}