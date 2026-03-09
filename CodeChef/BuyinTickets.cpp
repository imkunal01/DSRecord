#include <bits/stdc++.h>
using namespace std;

// we have to find the max amount that chef have to pay to buy tickets for k people, where there are N seats and some of them are already booked.

int main() {
    // int t;
    // cin >> t;
    
    // while(t--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> arr;
        for(int i = 0; i < N; i++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        
        int n = arr.size();
        string s;
        cin >> s;
        
        int mx = 0;
        for(int i = 0; i < n; i++) {
            if(K > 0 && s[i] == '0') {
                mx += arr[i];
                K--;
            }
        }
        if(K > 0) {
            cout << "-1" << endl;
        }
        else {
            cout << mx << endl;
        }
    // }
    
    return 0;
}



