#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int w,int  x,int  y,int  z){
    return ((w>x && w>y && w>z)?w:(x>w && x>y && x>z)?x:(y>w && y>x && y>z)?y:z);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
