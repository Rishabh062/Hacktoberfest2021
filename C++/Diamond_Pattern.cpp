#include<iostream>
using namespace std;
int main()
{
    int i, j, rowNum, space;
    cout<<"Enter the Number of Rows: ";  //Size of Diamond
    cin>>rowNum;
    space = rowNum-1;
    for(i=1; i<=rowNum; i++)
    {
        for(j=1; j<=space; j++)                                    ////For Upper Half Of The Diamomd
            cout<<" ";
            space--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
            cout<<endl;
    }
    space = 1;
    for(i=1; i<=(rowNum-1); i++)
    {
        for(j=1; j<=space; j++)                                      //For Lower Half Of The Diamomd
            cout<<" ";
            space++;
        for(j=1; j<=(2*(rowNum-i)-1); j++)
            cout<<"*";
            cout<<endl;
    }
    cout<<endl;
    return 0;
}
