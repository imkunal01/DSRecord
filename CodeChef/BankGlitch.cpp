#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    int k = a/x;
	    int total = (a-k*x) + (b+k*y);
	    cout<<total<<endl;
	}
}
