#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int bb;
    bb = *a;
    *a=*a+*b;
    if (bb>*b)
        *b=bb-*b;
    else 
        *b=*b-bb;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
