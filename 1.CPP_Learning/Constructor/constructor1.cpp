#include<iostream>
using namespace std;

class Student{
    public:
    Student(int i_d, string n_m, float m_n);
    int id;
    string name;
    float marks;
    //----------------------------------------------------------------
    //without constructor using member functions
    void student_info(int id, string name, float marks){
        this->id = id;
        this->name = name;
        this->marks = marks;
        cout<<endl;
        //cout<<"Done! "<<endl;
    }
    void display(){
        cout<<"--------------------------"<<endl;
        cout<<"Student id : "<<id<<endl;
        cout<<"Student name :"<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"--------------------------"<<endl;

    }
    //-------------------------------------------------------------------
    //Using constructor
    // Non-Parameterized -- for holding data for object, also needs to be displayed with function or using i/o keyword.
    // Student(){
    //     cout<<"Using Non-Parametrized Constructor --"<<endl;
    //     id = 10;
    //     name = "Mathilda";
    //     marks = 89;
    // }

    // Parametrized
    // Student(int i, string n, float m){
    //     id = i;
    //     name = n;
    //     marks = m;
    //     cout<<"Using Parametrized constructor --"<<endl;
    //     cout<<"ID : "<<id<<endl;
    //     cout<<"Name : "<<name<<endl;
    //     cout<<"Marks :"<<marks<<endl;
    //     cout<<"-------------------------------"<<endl;
    // }
};

Student::Student(int i_d, string n_m, float m_n){
        id = i_d;
        name = n_m;
        marks = m_n;
        cout<<"Using Parametrized constructor outside the class --"<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Marks :"<<marks<<endl;
        cout<<"-------------------------------"<<endl;
}

int main(){
// Student s1, s2;
// s1.student_info(11,"Jenny",90.2);
// s2.student_info(21,"Funny",60.4);
// s1.display();
// s2.display();
//Student s3 = Student();
//s3.display();
//Student s4 = Student(34,"Ronny",94);
Student s5 = Student(25,"Jeremy",101);
}