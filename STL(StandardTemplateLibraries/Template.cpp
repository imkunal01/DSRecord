#include <iostream>
#include<algorithm>
using namespace std;
template<class T>
T SwapTwoNum(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
}
int main() {
    SwapTwoNum<int>(3,4);
    return 0;
}