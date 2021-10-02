#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char c[10][10]={"","one","two","three","four","five","six","seven","eight","nine"}; 
    for (int n=a; n<=b; n++) {
        ((n<=9)?printf("%s\n",c[n]):(n%2==0)?printf("even\n"):printf("odd\n"));
    }
    return 0;
}

