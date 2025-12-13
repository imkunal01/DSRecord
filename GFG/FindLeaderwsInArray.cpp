#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int>Leaders(int arr[], int n) {
    vector<int> lead;
    int right = arr[n-1];
    lead.push_back(right);
    
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= right) {
            lead.push_back(arr[i]);
            right = arr[i];
        }
    }
    reverse(lead.begin(), lead.end());
    
    return lead;
}

int main() {
    int arr1[] = {16, 17, 4, 3, 5, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    vector<int> result1 = Leaders(arr1, n1);
    for (int leader : result1) {
        cout << leader << " ";
    }
    cout << endl;
    
    return 0;
}
