#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>code = {"SAVE20" , "", "PHARMA5" , "SAVE@20" };
    vector<string>businessLine = {"restaurant" , "", "Pharmacy" , "restaurant" };
    vector<bool>isActive = {true, true, true, true};

    vector<string>valBusinessLine = {"electronics", "grocery","pharmacy", "restaurant"};

    for(int i = 0; i < code.size(); i++){
        if((code[i]) && valBusinessLine.find(businessLine[i]) != string::npos && isActive[i] == true){
            cout<<code[i]<<endl;
        }
    }
    return 0;
}