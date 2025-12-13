#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int arr[n] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 10;

    int left = 0;
    int right = n - 1;
    int mid;
    int loc = -1;

    cout<<"Binary Search can only be applied on sorted arrays --> "<<endl;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            cout << "Element found at index: " << mid <<endl<<"Element Is: "<<arr[mid]<<endl;
            loc = mid; 
            break;
        }
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (!loc)
        cout << "Element not found" << endl;
    return 0;
}
