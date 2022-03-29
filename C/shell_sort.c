//shell sort in c
#include <stdio.h>
#include <stdlib.h>

void shellSort(int A[], int n)
{
    int gap, i, j;
    for (gap = n / 2; gap >= 1; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            int temp = A[i];
            j = i - gap;
            while (j >= 0 && A[j] > temp)
            {
                A[j + gap] = A[j];
                j -= gap;
            }
            A[j + gap] = temp;
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    shellSort(a, n);
    printf("The sorted elements after performing quick sort is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
