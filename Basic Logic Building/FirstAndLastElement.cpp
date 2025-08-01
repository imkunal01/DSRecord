#include <iostream>
using namespace std;
int main() {
    int n = 23455;
    int lastdig = n%10;
    while(n>9){
        n/=10;
    }
   cout<<lastdig<<endl;
   cout<<n<<endl;

    return 0;
}
//5 2  