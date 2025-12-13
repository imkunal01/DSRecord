#include <iostream>
using namespace std;
int main() {
   int a[5] = {1,4,5,6,7};
   int* ptr = a; 
   for (int i = 0; i<5; i++) {
       cout<<a[i]<<endl;
   }
    return 0;
}