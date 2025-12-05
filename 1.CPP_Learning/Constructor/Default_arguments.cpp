#include<iostream>
using namespace std;

class Order{
    int OrderID;
    string Order_name;
    float bill;
    int order_num;

    Order(int OrderID = 1234, string Order_name = "Most Fvt", float bill = 0.0, int order_num = 180){
        this->OrderID = OrderID;
        this->Order_name = Order_name;
        this->bill = bill;
        this->order_num = order_num;
    }

    Order(){
        cout<<"Order ID is : "<<OrderID<<endl;
        cout<<""
    }


};