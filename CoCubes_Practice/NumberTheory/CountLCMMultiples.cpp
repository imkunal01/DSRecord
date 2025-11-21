#include <bits/stdc++.h>
using namespace std;

long long lcmCalc(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    int k;
    cin >> k;
    long long ans, x;
    cin >> ans;
    for(int i=1; i<k; i++){
        cin >> x;
        ans = lcmCalc(ans, x);
    }
    cout << ans;
}