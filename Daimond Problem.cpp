#include<iostream>
using namespace std;
class person
{
public:
    string name;
    int age;

};
class student: virtual public person
{
public:
    int  id;
};
class faculty: virtual public person
{
public:
    string department;
};
class TA: public student, public faculty
{
public:

    int batch;
    void Display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Id:"<<id<<endl;
        cout<<"Batch:"<<batch<<endl;
        cout<<"Department:"<<department<<endl;

    }
};

int main()
{
    TA s;
    s.name= ("Jisan");
    s.id= 37;
    s.age=21;
    s.batch= 57;
    s.department=("CSE");
    s.Display();
    return 0;
}
