#include<stdio.h>
int arr[100];
int insert(int);
int delet(int);
int display(int);
int main(){
    int ch,s,i=0;
    printf("\n Enter how many element you want to store in your array : ");
    scanf("%d",&s);
    printf("\n Enter elements : ");
    for (i = 0; i <= s-1; i++)
    {
         scanf("\n%d",&arr[i]);
    }
    
    do
    {
        printf("\n\n\n\n***************************");
        printf("\n1.Insert");
        printf("\n2.Deletion");
        printf("\n3.Display");
        printf("\n***************************");
        printf("\n Enter your choice");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: insert(s);
                break;
        case 2: delet(s);
                break;
        case 3: display(s);
                break;
        default: printf("\n Choose correct option");
                break;
        case 4: printf("\n Exite ");
        }
    } while (ch!= 4);
    

}
int insert(int s){
    int x,pos;
    printf("\nEnter the postion where you want to insert the new element :\n");
    		scanf("%d",&pos);
    		printf("Enter the data element you want to insert :\n");
    		scanf("%d",&x);
    		for(int i=s-1;i>=pos-1;i--)
        	{
           		arr[i+1]=arr[i];
        	}
    		arr[pos-1]=x;
    		printf("Your new sequensce of elements is :\n");
    		for(int i=0;i<=s;i++)
        	{	
          		printf("%d ",arr[i]);
        	}
			
    		
    
}
int delet(int s){
    int d;
    printf("\n Enter element position you want to delete : ");
    scanf("%d",&d);
    for(int i=d-1;i<=s-1;i++)
        {
           	arr[i]=arr[i+1];
        }	
}
int display(int s){
    printf("\n Array elements : ");
    for (int i = 0; i < s; i++)
    {
        printf("\n  %d",arr[i]);
    }
    
}
