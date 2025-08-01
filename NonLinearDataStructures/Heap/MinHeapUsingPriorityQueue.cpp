#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
int main() {
    priority_queue<int, vector<int>, greater<int>> mnheap;
    mnheap.push(81);
    mnheap.push(89);
    mnheap.push(9);
    mnheap.push(11);
    mnheap.push(14);
    mnheap.push(76);
    mnheap.push(54);
    mnheap.push(22);
    while (!mnheap.empty()) {
        cout << mnheap.top() << " ";
        mnheap.pop();
    }
    cout << endl;
    return 0;
}