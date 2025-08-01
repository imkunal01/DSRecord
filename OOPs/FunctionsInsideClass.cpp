#include <iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    Cricketer(string name, int runs){
       this -> name = name;
       this -> runs = runs;
    }
    void print(){
        cout<<name<<" "<<runs<<endl;
    }
};
int main() {
   Cricketer c1("Virat Kohli",2500);
   c1.print();
   return 0;
}