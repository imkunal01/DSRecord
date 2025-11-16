// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v1 = {1, 2, 3, 0, 0, 0};
//     vector<int> v2 = {4, 5, 6};
//     int n = v1.size() - 1;
//     int m = v1.size() - 1;
//     int comb = n + m;

//     vector<int> merged = v1;
//     merged.insert(merged.end(), v2.begin(), v2.end());

//     sort(merged.begin(), merged.end());
//     merged.erase(remove(merged.begin(), merged.end(), 0), merged.end());

//     // vector<int>merged = v1;
//     // for(int i=0;i<m;i++){
//     //     merged.push_back(v2[i]);
//     // }
//     // sort(merged.begin(),merged.end());
//     // for(int i = 0;i<comb;i++){
//     //     if(merged[i] == 0){
//     //         merged.erase(merged.begin());
//     //     }
//     // }
//     for (int i : merged)
//     {
//         cout << i << " ";
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A = {1,2,3, 0,0,0};
    vector<int> B = {4,5,6};
    vector<int> merged;

    int i = 0, j = 0;
    int n = A.size(), m = B.size();

    while (i < n && j < m ) {
        if (A[i] <= B[j] ) {
            merged.push_back(A[i]);
            i++;
        } else {
            merged.push_back(B[j]);
            j++;
        }
    }

    // Copy remaining elements (if any)
    while (i < n) merged.push_back(A[i++]);
    while (j < m) merged.push_back(B[j++]);

    // Display result
    for (int x : merged) cout << x << " ";
}
