#include <bits/stdc++.h>
using namespace std;
int converToDeci(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            int digit = s[i] - '0';
            res = res * 2 + digit;
        }

    }
    return res;
}
int main()
{
    string s = "111";

    cout << converToDeci(s);
}