#include <iostream>
using namespace std;

class cars {
public: 
    string Name;
    int Price;
    int seat;
    // Parameterized constructor
    cars(string n, int p, int s) {
        Name = n;
        Price = p;
        seat = s;
    }
    // Overloaded constructor with two parameters
    cars(string n, int p) {
        Name = n;
        Price = p;
        seat = 0; // or some default value
    }
    // Default constructor
    cars() {
        Name = "";
        Price = 0;
        seat = 0;
    }
};

int main() {
    cars c1("Buggati", 10, 9);
    cars c2;
    c2.Name = "Kunal";
    c2.Price = 1000;

    cout << c1.Name << " " << c1.Price << " " << c1.seat << endl;
    cout << c2.Name << " " << c2.Price << " " << c2.seat << endl;
    return 0;
}
