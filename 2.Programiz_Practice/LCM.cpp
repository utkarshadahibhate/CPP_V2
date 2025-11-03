#include<iostream>
using namespace std;

int main()
{
    int num1, num2, max, LCM;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    if(num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    for(int i = 1; i <= max; i++)
    {
        if(num1 % i == 0 & num2 % i == 0)
        {
            LCM = i;
        }
        else
        {
            max++;
        }
        i++;
    }
    cout<<LCM<<endl;
}