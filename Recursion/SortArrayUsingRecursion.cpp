#include <iostream>
#include<algorithm>
using namespace std;
// void swap(int& a, int& b) {
//   int temp = a;
//   a = b;
//   b = temp;
// }
int part(int arr[], int low, int high) {
  int pi = arr[high];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr[j] < pi) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[high]);
  return i + 1;
}
void quick(int arr[], int low, int high) {
  if (low < high) {
    int pi = part(arr, low, high);
    quick(arr, low, pi-1);
    quick(arr, pi+1, high);
  }
}
void printA(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() {
  int arr[] = {5, 2, 8, 3, 1, 6, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  printA(arr, n);
  quick(arr, 0, n-1);
  printA(arr, n);
  return 0;
}