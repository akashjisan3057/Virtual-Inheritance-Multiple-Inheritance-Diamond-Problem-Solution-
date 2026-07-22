#include<iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
class Doctor: virtual public Person
{
public:
    string specialization;
};
class Patient: virtual public Person
{
public:
    int patientID;

};
class MedicalIntern: public Doctor, public Patient
{
public:
    int duration;
    void Display()
    {

        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Specialization:"<<specialization<<endl;
        cout<<"PatientID:"<<patientID<<endl;
        cout<<"Duration:"<<duration<<endl;

    }
};
int main()
{
    MedicalIntern m;

    m.name= "Jisan";
    m.age= 23;
    m.specialization= "Medicine";
    m.patientID= 3057;
    m.duration= 12;
    m.Display();

    return 0;
}
