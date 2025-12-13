#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    int n = 28;
    int sum = 0;
    for(int i = 1;i<n;i++){
        if(n%i==0){
            sum +=i;
        }
    }
    if(sum == n) cout<<"perfect"<<endl;
    else cout<<"Not perfect"<<endl;
    return 0;
}