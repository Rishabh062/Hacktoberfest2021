/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,n,c,i;
    
    cin>>n;
    a=0;b=1;
    cout<<a<<endl<<b<<endl;
    
    for(i=1;i<=n-2;i++)
{c=a+b;
    cout<<c<<endl;
    a=b;
b=c;
}
    return 0;
}
