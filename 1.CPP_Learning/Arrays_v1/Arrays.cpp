#include<iostream>
using namespace std;

int main()
{
    int n = 10, num[n];
    cout<<"Enter 10 numbers : "<<endl;
    
    for(int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    cout<<"Array elements are : ";
    for(int j = 0; j < n; j++)
    {
        cout<<num[j]<<" ";
    }
    cout<<endl;
}