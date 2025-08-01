#include <iostream>
#include <string>

using namespace std;

int main() {
    string email;
    cin >> email;

    bool isValid = false;

    if (isalpha(email[0])) {
        int at_pos = email.find('@');
        if (at_pos != -1) {
            int dot_pos = email.find('.', at_pos + 1);
            if (dot_pos != -1 && dot_pos < email.size() - 1) {
                isValid = true;
            }
        }
    }

    if (isValid) {
        cout << "Email Id is Valid." << endl;
    } else {
        
        cout << "Invalid Email Id!!!" << endl;
    }

    return 0;
}
