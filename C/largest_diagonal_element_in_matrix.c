#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, arr[100][100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int k;
    k = arr[1][1];
    for (i = 0; i < n; i++)
    {
        if (arr[i][i] > k)
        {
            k = arr[i][i];
        }
    }
    int r;
    r = arr[0][n - 1];
    for (j = 0; j < n; j++)
    {
        if (arr[j][n - j - 1] > r)
        {
            r = arr[j][n - j - 1];
        }
    }
    if (r > k)
    {
        printf("%d\n", r);
    }
    return 0;
}
