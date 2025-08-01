#include <iostream>
using namespace std;

void hey(int n ,int tar) {
    if(n==tar) return;
    hey(n-1,tar);
    cout<<n;
}
void ReverseHey(int n) {
    if(n==0) return;
    cout<<n;
    ReverseHey(n-1);
}
int main() {
    int n = 5;
    int tar = 10;
    hey(n,tar);
    cout<<endl;
    ReverseHey(n);
    return 0;
}