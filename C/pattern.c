//Cool pattern using C language
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, j, k;
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = n; i >= 1; i--)
        {
            for (j = 1; j <= i - 1; j++)
            {
                printf("-");
            }
            for (k = n; k >= i; k--)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else if (n < 0)
    {
        for (i = -n; i >= 1; i--)
        {
            for (j = 1; j <= -n - i; j++)
            {
                printf("-");
            }
            for (k = -n; k >= j; k--)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    return 0;
}