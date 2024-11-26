/*Linear Search*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int array[100];

float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}


int main()
{
    struct timeval t0;
    struct timeval t1;
    float elapsed;
    
    while(1)
    {
		int i=0,ch;
		long int size,limit,key;
		printf("\n1.Create list size and limit\t\t2.Generate Random Numbers\t\t3. Search\t\t4.Exit\t");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{	
				printf("Enter number of Elements: ");
				scanf("%ld",&size);
				long int array[size];
				printf("Enter Upper limit in place values: ");
				scanf("%ld",&limit);
				break;
			}
			
			case 2:
			{
				
				int num=size;
				int j,x,y,temp;
				srand( (unsigned) time(NULL) * getpid());
				gettimeofday(&t0, NULL);
				if(array != NULL)
				{
					for(j = 0; j < num; j++)
					{
						array[j] = rand()%limit;
					}
				}
				gettimeofday(&t1, NULL);
        		elapsed = timedifference_msec(t0, t1);
				
				for(j = 0; j < num; j++)
				{
					printf("%ld\n",array[j]);
				}				
				printf("Random Generation code executed in %f milliseconds.\n", elapsed);
				break;
			}
			
			
				
			case 3:
			{	  	 
				printf("Enter element to search for: ");
				scanf("%ld",&key);
				gettimeofday(&t0, NULL);
				for (i=0;i<size;i++)
				{
				 	if(array[i]==key)
				 	{
				 		printf("%ld found at position %d\n",key,i);
				 		break;
				 	}	
				}
				gettimeofday(&t1, NULL);
        		elapsed = timedifference_msec(t0, t1);
					
					
				 if(i=size-1 && array[i]!=key)
				 	printf("%ld not present\n",key);
				
				printf("Linear Search code executed in %f milliseconds.\n", elapsed);
				break;
			}
			
			case 4:
			{
				printf("Succesfully exiting program \n");
				exit(0);
			}
			
			default:
			{
				printf("\nError,wrong choice input");
				printf("\n");
				break;
			}
		}
	}
}
