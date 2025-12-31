#include<iostream>
using namespace std;

class Base{
    public:
    virtual ~Base(){
        cout<<"Base class destructor called !\n"<<endl;
    }
};
class Derived : public Base{
    private:
    int *data;

    public:
    //Constructor to initialize the data member
    Derived(){
        data = new int[5];
        cout<<"\nDerived allocated memory !"<<endl;
    }
    ~Derived(){
        delete[] data;
        cout<<"Derived destructor called !"<<endl;
    }
};
int main(){
    Base *b = new Derived();
    delete b;
    return 0;
}