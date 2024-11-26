// Program - Bubble Sort
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int array[1000000];

float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}

int main()
{
    struct timeval t0;
    struct timeval t1;
    float elapsed;
    
	int i,key,ch;
	long size,limit;
	printf("Enter number of Elements: ");
	scanf("%ld",&size);
	int array[size];
	printf("Enter Upper limit in place values: ");
	scanf("%ld",&limit);
	
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
	printf("\n");
	printf("List of Numbers:\n");
	for(j = 0; j < num; j++)
	{
		printf("%d\n",array[j]);
	}				
	printf("Random Generation code executed in %f milliseconds.\n", elapsed);
    printf("\n");
    gettimeofday(&t0, NULL);
    for(x = 0; x < num - 1; x++)
	{       
		for(y = 0; y < num - x - 1; y++)
		{          
		    if(array[y] > array[y + 1])
		    {               
		        temp = array[y];
		        array[y] = array[y + 1];
		        array[y + 1] = temp;
		    }
		}
	}
    gettimeofday(&t1, NULL);
    elapsed = timedifference_msec(t0, t1);
    printf("Bubble Sorted List of Numbers:\n");
	for(j = 0; j < num; j++)
	{
		printf("%d\n",array[j]);
	}
   printf("Bubble Sort Code executed in %f milliseconds.\n", elapsed);
}
