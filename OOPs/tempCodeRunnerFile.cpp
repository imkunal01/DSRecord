#include <iostream>
using namespace std;
class Student{
    public: 
        string Name;
        int rollNo;
        float gpa;
};
int main() {
    Student s1;
    s1.Name = "Kunal";
    s1.rollNo = 62;
    s1.gpa = 7.5;


    Student s2;
    s2.Name = "Deepak";
    s2.rollNo = 60;
    s2.gpa = 7.6;
    cout<<s1.Name<<endl;
    cout<<s1.rollNo<<endl;
    cout<<s1.gpa<<endl;
    cout<<s2.Name<<endl;
    cout<<s2.rollNo<<endl;
    cout<<s2.gpa<<endl;
    return 0;
} 