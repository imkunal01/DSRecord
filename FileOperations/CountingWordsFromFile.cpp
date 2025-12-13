#include <iostream>
#include <fstream>
#include<string>
#include<algorithm>
#define max 
using namespace std;

int main() {
    char s[max] = "Kunal";
    int age = 20;
    ofstream ofile("example.txt");
    if (!ofile.is_open()) {
        cout << "Unable to open" << endl;
    } else {
        // ofile << "Hey Im Kunal.\n";
        // ofile.close();
        // cout << "File created and written successfully." << endl;
        ofile<<"Name: "<<s<<endl;
        ofile<<"Age: "<<age<<endl;
        

    }
    ifstream ifile("sample.txt");
    char c[100];
    while(ifile.eof()){
            ifile>>s;
            cout<<s<<" ";
    }
    int count = 0;
    for(int i = 0;i<sizeof(s)/sizeof(s[0]);i++){
        count++;
    }
    cout<<count<<endl;
    while (ifile.getline(s)) {
        ofile << s;
    }
    return 0;
}