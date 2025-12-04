#include<iostream>
using namespace std;

class Car{//class
    public: //access specifier
    string brand;
    string model;
    int year;

    Car(){ //defining constructor
        brand = "Toyota";
        model = "Fortuner";
        year = 2020;
    }
};

int main(){
    Car my_car;
    cout<<"Car details---------------"<<endl;
    cout<<"Brand : "<<my_car.brand<<endl;
    cout<<"Model : "<<my_car.model<<endl;
    cout<<"Year : "<<my_car.year<<endl;
    cout<<"------------------------"<<endl;
}