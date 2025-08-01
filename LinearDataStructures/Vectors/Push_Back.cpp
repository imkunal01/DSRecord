#include <iostream>
#include<vector>
using namespace std;
void vecto(vector<int> &vect1){
    for (int i = 0; i <vect1.size(); i++) {
       cout<<vect1[i]<<" ";
    }
}
int main() {
   vector<int>vect1;
   int ele;
   int elesize = 5;
   for (int i = 0; i < elesize; i++) {
      cin>>ele;
      vect1.push_back(ele);
   }
   vecto(vect1);
   
   return 0;
}