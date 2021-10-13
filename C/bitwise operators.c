// C Program to demonstrate use of bitwise operators
// In C, the following 6 operators are bitwise operators (work at bit-level) 

#include <stdio.h>
int main(){
	int a,b;
	printf("Please type two number: ");
	scanf("%d%d",&a,&b);
  
  	// The & (bitwise AND) in C takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1. 
  	printf("a&b = %d\n", a & b);

  	// The | (bitwise OR) in C takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1.
  	printf("a|b = %d\n", a | b);

  	// The ^ (bitwise XOR) in C takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
  	printf("a^b = %d\n", a ^ b);

  	// The ~ (bitwise NOT) in C takes one number and inverts all bits of it 
  	printf("~a = %d\n", a = ~a);

  	// The << (left shift) in C takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. 
  	printf("b<<1 = %d\n", b << 1);

  	// The >> (right shift) in C takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. 
  	printf("b>>1 = %d\n", b >> 1);

  	return 0;

}
