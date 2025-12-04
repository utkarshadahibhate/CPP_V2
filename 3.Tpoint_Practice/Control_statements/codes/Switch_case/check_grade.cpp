#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a integer number : ";
    cin>>num;
    switch (num)
    {
    case 100:
        cout<<"your grade is A++ "<<num<<endl;
        break;
    case 90:
        cout<<"A+ Grade"<<endl;
        break;
    case 80:
        cout<<"A Grade"<<endl;
        break;
    case 70:
        cout<<"B++ Grade"<<endl;
        break;
    case 60:
        cout<<"B+ Grade"<<endl;
        break;
    case 50:
        cout<<"B Grade"<<endl;
        break;
    case 40:
        cout<<"C++ Grade"<<endl;
        break;
    case 30:
        cout<<"C+ Grade"<<endl;
        break;
    case 20:
        cout<<"C Grade"<<endl;
        break;
    case 10:
        cout<<"D Grade"<<endl;
        break;
    default:
        cout<<"This number is not graded, give only multiples of 10 "<<endl;
        break;
    }
}