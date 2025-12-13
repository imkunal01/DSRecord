#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 0, 2, 0, 3, 0, 4, 5};
    int n = 8;
    int zero = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            arr[zero] = arr[i];
            zero++;
        }
    }
    for (int i = 0; i < zero; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
// insertion
// deletion
// sorting- bubble,merge,slesection,insertion
// searching linear,bnary