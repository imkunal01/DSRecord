#include<iostream>
using namespace std;
int Count(int n){
    if(n == 0){
        return 0;
    }
    return 1 + Count(n/10);
}

int main(){
    int n = 12232;
    // int rem = 0;
    // int count = 0;
    // while(n>0){
    //     rem = n%10;
    //     n/=10;
    //     count++;
    // }
    // cout << "Number of digits: " << count << endl;
    cout<<Count(n);
    return 0;
}


// Count(12232)
//   |
//   +-- Count(1223)
//         |
//         +-- Count(122)
//               |
//               +-- Count(12)
//                     |
//                     +-- Count(1)
//                           |
//                           +-- Count(0) // base case