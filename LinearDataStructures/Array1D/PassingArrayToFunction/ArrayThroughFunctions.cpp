#include <iostream>
using namespace std;
void array(int arr[],int size){
    for(int i = 0; i < size; i++) {
       cout<<arr[i]<<endl;
    }
}
int main() {
   int arr[] = {1,2,3,4,5};
   int size = sizeof(arr)/4; //either you can divide by 4 or calculate size of array's first element
   //it is same thing but 4 works only when we know size of int if didnt then sizeof(arr[0]) is considered fine
   array(arr,size);
    return 0;
}