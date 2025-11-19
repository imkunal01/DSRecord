#include <iostream>
#include <vector>

using namespace std;

bool isSorted( vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> v = {2, 1, 4, 1, 5, 6};
    vector<int> v2 = {1, 2, 3, 4, 5, 6};

    if (isSorted(v)) {
        cout << "v is Sorted" << endl;
    } else {
        cout << "v is Not Sorted" << endl;
    }

    if (isSorted(v2)) {
        cout << "v2 is Sorted" << endl;
    } else {
        cout << "v2 is Not Sorted" << endl;
    }

    return 0;
}

