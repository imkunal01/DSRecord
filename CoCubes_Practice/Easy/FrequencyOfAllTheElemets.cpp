#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {1,1,2,2,2,1,1,1};
    unordered_map<int,int> freq;
    int num = 2;
    for(int x: nums){
        freq[x]++;
    }

    for(auto& c:freq){
        if(c.first == num){
            cout<<"The freqency of "<<num<<" is: "<<c.second;

        }
    }
}