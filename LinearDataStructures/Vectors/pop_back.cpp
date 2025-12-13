#include <iostream>
#include<vector>
using namespace std;
void vecto(vector<int> &vect1){
    
}
int main() {
   vector<int>vect1(5);
   vector<int> v;
   vect1[0] = 10;
   vect1[1] = 20;
   vect1[2] = 30;
   vect1[3] = 40;
   vect1[4] = 50;
   int ele;
   int elesize = 5;

   // for (int i = 0; i < elesize; i++) {
   //    cin>>ele;
   //    vect1.push_back(ele);
   // }
   for (int i : vect1) {
      cout<<i<<" ";
   }
   for (int i = 0; i<vect1.size(); i++) {
      if(i%2==0){
         v.push_back(vect1[i]);
      }
       
   }
   v.pop_back();
   cout<<endl;
   for (int i : v) {
      cout<<i<<" ";
   }
   
   return 0;
}