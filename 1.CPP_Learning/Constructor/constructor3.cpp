#include<iostream>
using namespace std;

class Employee{
    public:
    static int count;

    Employee()
    {
        cout<<"--------------------------"<<endl;
        cout<<"Default Constructor Invoked"<<endl;
        count++;
        //cout<<"Employee count: "<<count<<endl;
    }
};

int Employee::count=0;

int main(){
    Employee e1;
    Employee e2;
    cout<<"--------------------------"<<endl;
    cout<<"Total number of employees : "<<Employee::count<<endl;
    cout<<"--------------------------"<<endl;

}