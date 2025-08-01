#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int n = 12345;
    int count = 0;
    for (int i = 1;n>0; i++) {
       if(n>=0){
        n/=10;
        count++;
       } 
    }
    cout<<count<<endl;
    return 0;
}