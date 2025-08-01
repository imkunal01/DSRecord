#include <iostream>
using namespace std;
class cars{
    public: 
        string Name;
        int Price;
        int seat;

        cars(string s, int r, int g){   // this part is constructor like function class
            Name  = s;
            Price = r;
            seat  = g;
        }
};
int main() {
    cars c1("Buggati",10,9);
    cout<<c1.Name<<" "<<c1.Price<<" "<< c1.seat<<endl;
    return 0;
}   

// Maruti 62 6
// Honda 60 6      