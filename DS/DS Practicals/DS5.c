#include<stdio.h> //Selection Sort
int main(){
    int a[20],s,temp,k;
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
        for(int i=0; i<= s-1;i++){
            k=i;
            for (int j = i+1; j < s; j++)
            {
                if (a[k]>a[j])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
                
            }
        }
        printf("\n Entered array elements : ");
        for (int i = 0; i < s; i++)
        {
            printf("\t%d",a[i]);
        }

}