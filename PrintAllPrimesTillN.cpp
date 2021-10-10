/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        int count=0;
    for(int d=2;d*d<=i;d++){
        if(i%d==0){
            count++;
            break;
          } 
        }
        if(count==0){
            cout << i << "\n";
        }
    }
    

    return 0;
}


