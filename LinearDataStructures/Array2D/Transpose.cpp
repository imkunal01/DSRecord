#include <iostream>
using namespace std;
int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for (int i = 0; i < 3; i++) {
       for (int j = 0; j <3; j++) {
          cout<<arr[i][j];
       }
       cout<<" "<<endl;
    }
    cout<<endl;
    int t[3][3] ;
    for (int i = 0; i < 3; i++) {
       for (int j = 0; j <3; j++) {
          t[j][i] = arr[j][i];
          cout<<t[j][i];
       }
       cout<<" "<<endl;
    }

    //transpose


    return 0;
}