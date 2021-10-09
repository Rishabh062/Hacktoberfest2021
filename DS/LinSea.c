#include<stdio.h>
int main(){
        int a[20],key,s,flag=0,i=0;
        printf("\n Enter how many elements you want to insert in array  : ");
        scanf("%d",&s);
        printf("\nEnter array elements : ");
        for (i = 0; i < s; i++)
        {
            scanf("\t%d",&a[i]);
        }
        printf("\n\nEnter key element you want to search : ");
        scanf("%d",&key);
        for (i = 0; i < s; i++)
        {
            if(a[i]==key){
                flag=1;
                goto find;
            }
            
        }
        find:
        if(flag=1){
            printf("\n Key element found at position : %d !!!!!",(i+1));
        }else
        {
            printf("\n Key element didn't found!!!!!");
        }
        
        
        
}