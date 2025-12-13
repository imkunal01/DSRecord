#include <iostream>
#include <algorithm> // For reverse()
using namespace std;

int main() {
    string str = "hello";

    cout << "Original string: " << str << endl;

    // Use STL reverse function
    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}
