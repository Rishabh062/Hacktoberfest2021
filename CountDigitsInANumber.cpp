/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,a,c=0;
    cin>>n;
    a=n;
    while(a>0)
    {a=a/10;
        c++;
    }
    
    cout<<c;
    return 0;
}
