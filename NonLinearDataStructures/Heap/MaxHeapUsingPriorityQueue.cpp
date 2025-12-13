#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    priority_queue<int> mxheap;
    // mxheap.push(81);
    // mxheap.push(89);
    // mxheap.push(9);
    // mxheap.push(11);
    // mxheap.push(14);
    // mxheap.push(76);
    // mxheap.push(54);
    // mxheap.push(22);
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;  
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        mxheap.push(value);
    }
    while (!mxheap.empty()) {
        cout << mxheap.top() << " ";
        mxheap.pop();
    }
    cout << std::endl;
    return 0;
}
