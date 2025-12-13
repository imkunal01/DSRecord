#include<iostream>
using namespace std;
int main(){
    int x = 4534;
    int rev = 0; // Initialize rev to 0
    while (x>0)
    {
        rev = rev*10 + x%10;
        x = x/10;

    }
    cout<<rev;
    
} 