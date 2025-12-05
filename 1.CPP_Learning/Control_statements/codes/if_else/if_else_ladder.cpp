#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number to check grade : "<<endl;
    cin>>num;
    if(num<0 || num>100)
    {
        cout<<"wrong number!"<<endl;
    }
    else if (num>=0 && num<50)
    {
        cout<<"Fail "<<endl;
    }
    else if (num>=50 && num<60)
    {
        cout<<"D Grade"<<endl;
    }
    else if (num>=60 && num<70)
    {
        cout<<"C Grade"<<endl;
    }
    else if (num>=70 && num<80)
    {
        cout<<"B Grade"<<endl;
    }
    else if (num>=80 && num<90)
    {
        cout<<"A Grade"<<endl;
    }
    else
    {
        cout<<"A+ Grade"<<endl;
    }
    
}