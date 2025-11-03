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

    // while(true)
    // {
    //     if(max % num1 == 0 & max % num2 == 0)
    //     {
    //         LCM = max;
    //         cout<<"LCM is: "<<LCM<<endl;
    //     }
    //     else
    //     {
    //         max++;
    //     }
    // }

    for(int i = max;; max++)
    {
        if(i % num1 == 0 & i % num2 == 0)
        {
            LCM = i;
            //cout<<"LCM is : "<<LCM;
            break;
        }
        // else
        // {
        //     max++;
        // }
        // i++;
    }
    cout<<LCM<<endl;
}