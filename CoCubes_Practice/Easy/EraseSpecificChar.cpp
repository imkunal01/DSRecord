#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Im 2123 kunal dhangar@@$$";
    s.erase(remove_if(s.begin(), s.end(), ::isalnum ), s.end());
    cout<<s;

}
