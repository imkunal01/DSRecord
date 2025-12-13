#include<iostream>
#include<iomanip>
using namespace std;
template<typename T>
T check(T a[],int n){
    double sum =0;
    for(int i = 0;i<n;i++){
        sum+=a[i];
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
}
int main(){
    int n;
    cin>>n;
    double a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    check<double>(a,n);
}