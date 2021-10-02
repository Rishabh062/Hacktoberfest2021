#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

/*for finding area of triangle*/
double area(triangle tr){
    double p=(tr.a+tr.b+tr.c)/2.0;   
    return sqrt(p*(p-tr.a)*(p-tr.b)*(p-tr.c));
}
/*for swapping triangles*/
void swap(triangle* t1,triangle* t2){
    triangle temp;
    temp=*t1;
    *t1=*t2;
    *t2=temp;
}
void sort_by_area(triangle* tr, int n) {
	/* Sort an array a of the length n*/
    /*Bubble sort*/
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++)
            if(area(tr[j])>area(tr[j+1]))
                swap(&tr[j],&tr[j+1]);
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
