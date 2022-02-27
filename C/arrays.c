#include <stdio.h> 
int main()
{
    int n,i;
    int arr[100];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n+1;i++){
        if (arr[i]>arr[i+1]){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
