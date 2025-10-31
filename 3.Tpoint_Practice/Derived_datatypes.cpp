#include<iostream>
using namespace std;

int main()
{ //Arrays ------> 1D Array, 2D Array, Multi-dimensional array, Dynamic Arrays
    int a[6] = {1, 10, 67, 78, 64, 34};
    cout<<"1D Array : "<<endl;
    // To access 1D array elements 

    for(int i = 0; i<6; i++) // indexing from 0 , i < 6
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n\n";

    // 2D Array-----------------------------------------------
    int b[2][3] = {{1,2,3},{4,5,6}};
    cout<<"2D Array: "<<endl;
    // to access 2D Array elements
    for(int p = 0; p < 2; p++) // loop for rows
    {
        for(int q = 0; q < 3; q++) // loop for columns
        {
            cout<<b[p][q]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    //Dynamic Array------------------------------

}





