/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int t,p=1,a,i,j;
   cin>>t;
   int c[11];
   a=t;
   while (a>0)
   {c[p]=a%10;
       a=a/10;
       p++;
   }
   p=p-1;
   for(i=p;i>=1;i--)
   {cout<<c[i]<<endl;}
   
   
       return 0;
}

