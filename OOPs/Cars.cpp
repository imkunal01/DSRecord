#include <iostream>
using namespace std;
class cars{
    public: 
        string Name;
        int Price;
        int seat;
};
int main() {
    cars c1;
    c1.Name = "Maruti";
    c1.Price = 62;
    c1.seat = 6;


    cars c2;
    c2.Name = "Honda";
    c2.Price = 60;
    c2.seat = 6;



    
    cout<<c1.Name<<endl;
    cout<<c1.Price<<endl;
    cout<<c1.seat<<endl;
    cout<<c2.Name<<endl;
    cout<<c2.Price<<endl;
    cout<<c2.seat<<endl;
    return 0;
}