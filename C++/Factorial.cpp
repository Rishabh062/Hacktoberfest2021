/*
We have to take input from user and then have to calculate its factorial , but we have a restriction,
we have to use recursion concept for calculating Factorial of entered numbere
*/
#include <iostream>
using namespace std;
int factorial(int x){
	if(x>1)
	x=x*(factorial(x-1));
	else
	return 1;
}

int main(){
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	if(number>0){
	cout<<"Factoral of "<<number<<" is "<<factorial(number);	
	}
	else
	cout<<"Enter number is invalid";
    
}


