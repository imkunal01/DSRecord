#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4,5,6};
    int org = 2;
    bool found = true;
    while (found)
    {
        found = false;
        for (int num : nums)
        {
            if (num == org)
            {
                org *= 2;
                found = true;
                break;
            }
        }
    }
    cout<< org;
}