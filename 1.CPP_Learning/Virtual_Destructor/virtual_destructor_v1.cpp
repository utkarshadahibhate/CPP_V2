#include<iostream>
using namespace std;

class Base_class{
    public:
    virtual ~Base_class(){
        cout<<"Base Destructor !"<<endl;
    }
};
class Derived : public Base_class{
    public:
    ~Derived(){
        cout<<"Derived Destructor !"<<endl;
    }
};
int main(){
    Base_class *ptr = new Derived();
    delete ptr;
    return 0;
}