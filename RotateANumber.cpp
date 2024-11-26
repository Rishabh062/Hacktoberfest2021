/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,n,k,j,a;
    cin>>n>>k;
    int c[11];
    a=n;
    i=1;
    while (a>0)
    {c[i]=a%10;
        a=a/10;
        i++;}
        
        i=i-1;
       if(k>=0) 
       { k=k%i;
       for(j=k;j>=1;j--) 
       { cout<<c[j];
       }  
       
       for(j=i;j>k;j--)
       {cout<<c[j];}}
       
       else {k=k%i;
           k=k+i;
           
           
           
           for(j=k;j>=1;j--) 
       { cout<<c[j];
       }  
       
       for(j=i;j>k;j--)
       {cout<<c[j];}
       }
        
   

    return 0;
}

