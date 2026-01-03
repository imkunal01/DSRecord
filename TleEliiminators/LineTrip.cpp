#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int ans = arr[0];
        for(int i = 1;i<n;i++){
          ans = max(ans,arr[i]-arr[i-1]);
        }
        ans = max(ans,2*(x- arr[n-1]));
        cout<<ans<<endl;
        
    }
}



// 3
// 3 7
// 1 2 5
// 3 6
// 1 2 5
// 1 10
// 7