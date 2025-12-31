#include<iostream>
using namespace std;

class Base{
    public:
    ~Base(){    //without making it virtual
        cout<<"Base class destructor !"<<endl;
    }
};
class Derived : public Base{
    public:
    ~Derived(){
        cout<<"Derived class destructor !"<<endl; //will skip this
    }
};
int main(){
    Base *ptr = new Derived();
    delete ptr;
    return 0;
}
//without virtual keyword only base class destructor will be called and executed