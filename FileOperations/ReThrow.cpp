#include <iostream>
using namespace std;
void check(int a, int b){
    try{
        if(b == 0){
            throw 1;
        }
    }
    catch(int x){
        cout<<"Cant be divided catched through check"<<endl;
        throw;
    }
}
int main() {
   
    try{
        check(2,0);
    }
    catch(int x){
        cout<<"Cant be divided by 0 catched throgh outer catch"<<endl;
    }
    return 0;
}
