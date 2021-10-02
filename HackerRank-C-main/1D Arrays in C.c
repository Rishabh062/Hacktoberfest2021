#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned int n;
    scanf("%u",&n);
    unsigned  int a[n],sum=0;
    for (int i=0; i<n; i++) {
        scanf("%u",&a[i]);
        sum+=a[i];
    }
    printf("%u",sum);  
    return 0;
}
