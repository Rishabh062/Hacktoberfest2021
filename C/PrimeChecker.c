#include <stdio.h>
#include <stdlib.h>

unsigned long long numberTillSearch = 0;
unsigned long long count = 0;


int checkPrime(unsigned long long numToCheck) {
	if ((numToCheck % 2 == 0)) {
		return 1;
	}
	for (unsigned long long count = (unsigned long long)3 ; count <= sqrt(numToCheck) ; count=count+2) {
		if ((numToCheck % count == 0)) {
			return 1;
		}
	}
	return 0;
}

void main() {
	printf("Till What number do you want to find the primes? ");
	scanf_s("%llu",&numberTillSearch);

	for (count = (unsigned long long)2; count <= numberTillSearch; count++) {
		if (checkPrime(count) == 0) {
			printf("%llu \n", count);
			
		}
	}
}
