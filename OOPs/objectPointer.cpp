#include <iostream>
using namespace std;
class cars {
public: 
    string Name;
    int Price;
    int seat;
    cars(string n, int p, int s) {
        Name = n;
        Price = p;
        seat = s;
    }
    cars(string n, int p) {
        Name = n;
        Price = p;
        seat = 0; 
    }
    cars() {
        Name = "";
        Price = 0;
        seat = 0;
    }
    cars(int p , string n , int s) {
        Price = 1000;
        Name = "Harish";
        seat = 10;
    }
};
int main() {
    cars c1("", 10, 9);
    cars c2;
    c2.Name = "Kunal";
    c2.Price = 1000;
    cars c3(c1);  
    cout << c1.Name << " " << c1.Price << " " << c1.seat << endl;
    cout << c2.Name << " " << c2.Price << " " << c2.seat << endl;
    cout << c3.Name << " " << c3.Price << " " << c3.seat << endl;
    return 0;
}
