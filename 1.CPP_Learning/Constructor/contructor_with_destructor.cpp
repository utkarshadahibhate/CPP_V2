#include<iostream>
using namespace std;

//Constructor with destructor

class ParamCode{
    public:
    int x;
    //ParamCode(int i); //defining a constructor
    //~ParamCode(); //defining a destructor // can't have parameters

    //Another way of defining the same approach
    ParamCode(int x){
        this->x = x;
        cout<<"The value assigned to x is : "<<x<<endl;
    }
    ~ParamCode(){
        cout<<"This is a destructor to delete x value : "<<x<<endl;
    }
};
// ParamCode::ParamCode(int i){  //Initializing a constructor
//     x = i;
// }
// ParamCode::~ParamCode(){   // Deleting an initialized constructor i.e destructor // can't have parameters
//     cout<<"After destructing the objects which are having the value of x is as follows: "<<x<<endl;
// }

int main(){
    ParamCode t1(20); //class object creation and assignment
    ParamCode t2(55);
    //cout<<"The values for t1.x is : "<<t1.x<<endl;
    //cout<<"The values for t2.x is : "<<t2.x<<endl;
}
