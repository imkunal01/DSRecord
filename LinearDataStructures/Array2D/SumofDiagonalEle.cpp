#include <iostream>
using namespace std;
int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            if(i==j){
               sum+=arr[i][j];
            }
        }
    }
    cout<<sum<<endl;
    //sum of primary diagonal
    int sum2 = 0;
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i<3; i++) {
        sum2+=arr[i][i];
    }
    cout<<sum2<<endl;
    // sum of secondary diagonal
    int sum3 = 0;
    int arr3[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i<3; i++) {
        sum3+=arr[i][3-1-i];
    }
    cout<<sum2<<endl;
    return 0;
}
