#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<char> st = {'H', 'E', 'L', 'L', 'O'};
    int left = 0, right = st.size() - 1;

    while (left < right) {
        swap(st[left], st[right]);
        left++;
        right--;
    }

    for (int i = 0; i < st.size(); i++) {
        cout << st[i];
    }
    cout << endl;
    return 0;

}