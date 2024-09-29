#include<stdio.h>

void ta_time();
void wt_time();

char *a;
int bur_time[10],tat_time[10],arr_time[10],n,i;
	
void main()
{
	printf("How many processes you want:-\n");
	scanf("%d",&n);
	printf("Input %d Processes sequentially(without space):-\n",n);
	a=(char *)malloc(n*sizeof(char));
	scanf("%s",a);
	printf("\nInput corresponding burst time:-\n");
	for(i=0;i<n;i++)
	    scanf("%d",&bur_time[i]);
	printf("\nInput corresponding arrival time:-\n");
	for(i=0;i<n;i++)
	    scanf("%d",&arr_time[i]);
	ta_time();
	wt_time();
}

void ta_time()
{
	int bt=0;
	float avg=0.0;
    for(i=0;i<n;i++)
    {
    	bt=bt+bur_time[i]; // completion time
        tat_time[i]=bt-arr_time[i]; // completion time - arrival time
	}
	printf("The Turnaround Time will be:-\n");
	for(i=0;i<n;i++)
	{
		printf("\n%c --> %d ",a[i],tat_time[i]);
		avg=avg+tat_time[i];
	}
	printf("\nHence, the average Turnaround Time will be:- %f",avg/n);
}

void wt_time()
{
	int wt=0;
	float avg=0.0;
    printf("\nThe Waiting Time will be:-\n");
	for(i=0;i<n;i++)
	{
		wt=tat_time[i]-bur_time[i];
		printf("\n%c --> %d ",a[i],wt);
		avg=avg+wt;
	}
	printf("\nHence, the average Waiting Time will be:- %f",avg/n);
}
