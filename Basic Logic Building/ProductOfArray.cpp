#include <iostream>
using namespace std;
int main() {
   int arr[5] = {7,8,9,5,6};
   int prod = 1;
   for (int i = 1; i <= 5; i++) {
    prod*=arr[i];
   }
   cout<<prod<<endl;
    return 0;
}