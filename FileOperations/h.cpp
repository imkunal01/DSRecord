#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream so("already.txt");
    ofstream de("copy.txt");
    string line;
    while (getline(so, line)) {
        de << line << endl;
    }

    so.close();
    de.close();
    return 0;
}
