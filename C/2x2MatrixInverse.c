// Write a program that calculates the inverse of a 2x2 matrix
// May be used for vector manipulations

// Enter matrix, you will get the inverse

#include <stdio.h>

struct matrix2X2
{
	int a1, b1, a2, b2;
};

int calculateDeterminant(struct matrix2X2* matrix2x2) {
	return (matrix2x2->a1 * matrix2x2->b2 - matrix2x2->a2 * matrix2x2->b1);
}


void main() {
	// Take user input
	printf("| A1 B1 |\n| A2 B2 |\n");
	printf("Enter The Values for the matrix:\n");

	struct matrix2X2 matrix;

	printf("\nA1:\n>");
	scanf_s(" %d", &matrix.a1);

	printf("\nB1:\n>");
	scanf_s(" %d", &matrix.b1);

	printf("\nA2:\n>");
	scanf_s(" %d", &matrix.a2);

	printf("\nB2:\n>");
	scanf_s(" %d", &matrix.b2);

	// Calculate determinant
	int det = calculateDeterminant(&matrix);
	printf("\nThe determinant is: %d", det);

	printf("\nThe inverse is: \n %d  %d \n %d  %d",(det*matrix.a1), (det * matrix.b1), (det * matrix.a2), (det * matrix.b2));

}