#include <iostream>
using namespace std;
int main() {
  int r= 3,c = 3;
  int arr[r][c] = {{1,2,3},{4,5,6},{7,8,9}}; 
  int top = 0, bottom = r-1;
  int left = 0, right = c- 1;
  while (top <= bottom && left <= right) {
    for (int i = left; i <= right; i++) {
        cout << arr[top][i] << " ";
    }
    top++;
    cout<<endl;
    for (int i = top; i<= bottom; i++) {
      cout<<arr[i][right]<<" ";
    }
    right--;
    cout<<endl;
    if(top<=bottom){
      for (int i = right; i>= left; i--) {
        cout<<arr[bottom][i]<<" ";
      }
      bottom--;
    
    }
    
    if(left<=right){
      for (int i = bottom; i>= top; i--) {
        cout<<arr[i][left]<<" ";
      }
      left++;
    
  }

    return 0;
}
}