#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;
int main() {
    vector<float>v = {1.30,2.40,3.60,4.60,5.80};
    int s = v.size();
    int idx = 2;
    if(idx>=0 && idx <= s){
        v.erase(v.begin()+idx);
    }
    else{
        return 1;
    }
    if(s>0){
        swap(v.front(),v.back());
    }
    for (float i :v) {
        cout<<fixed<<setprecision(2)<<i<<" ";
    }
    return 0;
}
