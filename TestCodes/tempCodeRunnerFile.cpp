#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int n = 12321;
    int org = n;
    int rev= 0;
    int dig;
    while(n>0){
        dig = n%10;
        rev = rev*10 + dig;
        n/=10;
    }
    if(org == rev) cout<<"yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}