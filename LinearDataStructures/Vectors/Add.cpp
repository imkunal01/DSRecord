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

   vector<int> :: iterator iter = vect1.begin();
   vect1.insert(iter+3,4,0);  // iter+index,how many times to iterate,element which will iterate
   vecto(vect1);
   
   return 0;
}