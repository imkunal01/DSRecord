<<<<<<< HEAD
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
=======
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
>>>>>>> 4a9d6733e646b4b245351020a85b6d2c039033d2
}