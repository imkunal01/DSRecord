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
void revpart(vector<int>&v1,int i,int j){
    while (i<j)
    {
        int temp  = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
        i++;
        j--;
    }
    vecto(v1);
    return;
    
}
int main() {
   vector<int> v1;
   v1.push_back(1);
   v1.push_back(3);
   v1.push_back(5);
   v1.push_back(7);
   v1.push_back(9);
   //reverse
   cout<<"original: ";
   vecto(v1);
   cout<<"Partially reversed: ";
   revpart(v1,2,3);
    return 0;
} 