#include<iostream>
using namespace std;
int Factorial(int n)
{
    if(n>1)
   return n*Factorial(n-1);
   else 
   return 1;
	
}	
int main()
{
	int n;
	cout<<"Enter +ve Number :";
	cin>>n;
	cout<<"Factorial of "<<n<<" is : "<<Factorial(n);
	return 0;
}
