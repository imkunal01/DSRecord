#include <iostream>
using namespace std;
int a = 12345;
int main() {
   int a = 12345;
   int sum = 0;
   for (;a>0;a/=10 ) {
      sum+=a%10;
   }
   cout<<sum<<endl;

   
   int b = 12341;
   int sum2 = 0;
   while(b>0){
      sum2+=b%10;
      b/=10;
   }
   cout<<sum2<<endl;

}