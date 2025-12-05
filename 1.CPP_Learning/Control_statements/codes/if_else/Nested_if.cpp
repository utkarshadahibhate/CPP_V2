#include<iostream>
using namespace std;

int main()
{
    int age;
    bool hasID; //bool value to take 1 or 0 as yes or no input

    cout<<"Enter your Age: "<<endl;
    cin>>age;
    cout<<"Do you have an ID pass: press 1 for YES or 0 for NO : "<<endl;
    cin>>hasID;

    if (age >= 18)
    {
        if(hasID)
        {
            cout<<"Welcome to the portal !"<<endl;
        }
        else
        {
            cout<<"You need an ID pass to enter "<<endl;
        }
    }
    else
    {
        cout<<"You are not old enough to enter "<<endl;
    }
}