#include <iostream>  
using namespace std;  

void swap(int*a,int*b)
{
int temp;
temp = *a;
*b=*a;
*b=temp;
}
int main()  



{  
    int a,b,temp;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    swap(a,b);
    cout<<"swapped number 1 is "<<a<<endl;
    cout<<"1swapped number 2 is "<<b<<endl;
  return 0;  
}  
