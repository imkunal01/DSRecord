#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {
    string s = "Kunal";
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
    string c;
    while(ifile.eof()){
            ifile>>s;
            cout<<s<<" ";
        }

    return 0;
}