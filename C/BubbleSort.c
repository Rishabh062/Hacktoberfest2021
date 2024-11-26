#include <stdio.h>

int main()
{
    int a[100],i,j,n,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("buuble sort \n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

    return 0;
}
