#include <stdio.h>
void read_elements(int ele[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &ele[i]);
}
void print_elements(int ele[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t", ele[i]);
}
int find_min_pos(int ele[], int p, int n)
{
    int min, min_pos, i;
    min = ele[p];
    min_pos = p;
    for (i = p + 1; i < n; i++)
    {
        if (ele[i] < min)
        {
            min_pos = i;
            min = ele[i];
        }
    }
    return min_pos;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int ele[], int n)
{
    int i, pos;
    for (i = 0; i < n - 1; i++)
    {
        pos = find_min_pos(ele, i, n);
        swap(&ele[i], &ele[pos]);
        //	printf("%d\t",pos);
    }
    printf("\n");
}
int main()
{
    int ele[20], n;
    printf("Enter number of elements");
    scanf("%d", &n);
    read_elements(ele, n);
    selection_sort(ele, n);
    int new_arr[20],j;
    for (j=0;j<=n;j++){
        new_arr[n-j] = ele[j-1]; 
    }
    for (j=0;j<n;j++){
        printf("%d\t",new_arr[j]);
    }
}
