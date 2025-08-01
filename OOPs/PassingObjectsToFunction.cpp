#include <iostream>
using namespace std;
class cars{
    public: 
        string Name;
        int Price;
        int seat;
};
void Auto(cars c){
    cout<<c.Name<<" "<<c.Price<<" "<<c.seat<<endl;
}
int main() {
    cars c1;
    c1.Name = "Maruti";
    c1.Price = 62;
    c1.seat = 6;


    cars c2;
    c2.Name = "Honda";
    c2.Price = 60;
    c2.seat = 6;
    Auto(c1);
    Auto(c2);
    return 0;
}   

// Maruti 62 6
// Honda 60 6