#include<iostream>
using namespace std;

class Employee{
    string name;
    int id, age;
    float salary;
    public:
    Employee(string name, int id, int age, float salary){
        this->name = name;
        this->id = id;
        this->age = age;
        this->salary = salary;
    }

    void show(){
        cout<<"----------------------------"<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"----------------------------"<<endl;

    }
};

int main(){

Employee emp1("Ampere",3456,45,467900);
Employee emp2("Kelly",8734,38,2678480);

emp1.show();
emp2.show();
}