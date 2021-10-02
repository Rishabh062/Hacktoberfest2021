#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int AND=0,OR=0,XOR=0;
  for (int i=1;i<=n;i++){
      for(int j=i+1;j<=n;j++){
        if (((i&j) > AND) && ((i&j) < k)) {
                AND = i&j;
        }
        if (((i|j) > OR) && ((i|j) < k)) {
                OR = i|j;
        }
        if (((i^j) > XOR) && ((i^j) < k)) {
               XOR = i^j;
        }
      }
  }
  printf("%d\n%d\n%d\n",AND,OR,XOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
