#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    string name;
    float salary;
    
    //Constructor with parameters
    Employee(int i, string n, float s){
        id = i;
        name = n;
        salary = s;
    }
    void show()
    {
        cout<<"ID :"<<id<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Salary :"<<salary<<endl;
        cout<<"--------------------------"<<endl;

    }
};
int main(){
    //using constructor for inserting values
    cout<<"Using parametrized constructor-------"<<endl;
    cout<<"--------------------------"<<endl;
    Employee emp1 = Employee(1234, "Varun", 760000);
    Employee emp2 = Employee(4567, "Jyothi", 670000);
    emp1.show();
    emp2.show();
}