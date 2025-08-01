// reverse array using vector and with reverse in different array
#include <iostream>
#include<vector>
using namespace std;
void vecto(vector<int> &v1){
    for (int i = 0; i< v1.size(); i++) {
    cout<<v1[i]<<" ";
   }
   cout<<endl;
}
int main() {
   vector<int> v1;
   v1.push_back(1);
   v1.push_back(3);
   v1.push_back(5);
   v1.push_back(7);
   v1.push_back(9);
   vecto(v1);
   vector<int> v2(v1.size());
   for (int i = 0; i <v2.size(); i++) {
    v2[i] = v1[v1.size() -1 - i];
   }
   vecto(v2);
    return 0;
} 
// output
// 1 3 5 7 9 
// 9 7 5 3 1