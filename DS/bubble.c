#include<stdio.h>
int main(){
    int a[20],s,temp;
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

        for (int i = 1; i < s-1; i++)
        {
            for (int j = 0; j < s-1; j++)
            {
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
            
        }

        printf("\n \n\nSorted array elements : ");
        for (int i = 0; i < s; i++)
        {
            printf("\t%d",a[i]);
        }

}