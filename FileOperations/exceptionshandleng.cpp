#include <iostream>
#include<string>
using namespace std;
int main() {
    string pass;
    cout<<"Enter Password";
    cin>>pass;
    try{
        if(pass.length()<8);
            throw 1;

        if(!isdigit(pass[0])){
            throw 'p';
    }
        }
        catch(int x)
        {
            cout<<"Length should be atleast 8"<<endl;
        }
        catch(char x){
            cout<<"One character should be digit"<<endl;
        }
    return 0;
}