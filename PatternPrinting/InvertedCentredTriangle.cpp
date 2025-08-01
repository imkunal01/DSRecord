#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i <n ; i++) {
        for  (int k= 0; k <i; k++){
            cout << " ";
        }
        for (int j = 0;  j <2* n -(2*i+1) ;j ++) {
            cout << "*";
        }
        for (int k= 0; k <i; k++) {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
//********
//_******_
//__****__
//___**___
//____*____