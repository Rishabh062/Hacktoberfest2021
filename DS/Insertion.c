#include<stdio.h>
int main(){
    int a[20],s,temp,k,j=0;
        printf("\n Enter how many elements you want to insert in array  : ");
        scanf("%d",&s);
        printf("\nEnter array elements : ");
        for (int i = 0; i < s; i++)
        {
            scanf("\t%d",&a[i]);
        }
        printf("\n Entered array elements : ");
        for (int i = 0; i < s; i++)
        {
            printf("\t%d",a[i]);
        }
        for(int i=1;i<s;i++)
            {
                temp=a[i];
                    for(j=i-1;j>=0 && a[j]>temp;j--)
                    {
                        a[j+1]=a[j];
                    }
                a[j+1]=temp;
            } 
        printf("\n Entered array elements : ");
        for (int i = 0; i < s; i++)
        {
            printf("\t%d",a[i]);
        }
}