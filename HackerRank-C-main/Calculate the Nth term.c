#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

static int hash[100] = {0};
int find_nth_term(int n) {
  //Write your code here.
  if(hash[n]==0)
   hash[n] = find_nth_term(n-1)+find_nth_term(n-2)+find_nth_term(n-3);
   return hash[n];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    hash[0] = a;
    hash[1] = b;
    hash[2] = c;
    int ans = find_nth_term(n);
 
    printf("%d", ans); 
    return 0;
}
