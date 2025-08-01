#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s1,s2;
    s1 = "Kunal";
    s2 = "Dhangar";
    // string s3 = s1+s3;
    string s3 = s1.append(s2);
    cout<<s3<<endl;
    return 0;
}