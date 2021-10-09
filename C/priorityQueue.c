#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5

void enqueue(int element,int priority);
void dequeue();
void display();
int pqueue[CAPACITY],front=-1,rear=-1;
int order[CAPACITY];

void main(){
    int ch , element , priority;
    printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit");
    
    while(1){
        printf("\nEnter your choice : ");
        scanf("%d",&ch);

        switch(ch){
            case 1 :
                if(rear==CAPACITY-1)
                    printf("\nThe queue is full");
                else{
                    printf("\nEnter the element : ");
                    scanf("%d",&element);
                    printf("Enter the priority : ");
                    scanf("%d",&priority);
                    enqueue(element,priority);
                }
                break;

            case 2 : 
                if(front==-1 && rear==-1)
                    printf("\nThe queue is empty\n");
                else
                    dequeue();
                break;

            case 3 : 
                if(front==-1 && rear==-1){
                    printf("\nThe queue is empty\n");
                }
                else
                    display();
                break;

            case 4 :
                exit(0);

            default :
                printf("Wrong choice");
        }
    }
}

void enqueue(int element,int priority){
    if(front==-1 && rear==-1){
        front=0;
        rear=0;
        pqueue[rear]=element;
        printf("%d is enqueued\n",element);
        order[rear]=priority;
    }
    else{
        rear++;
        pqueue[rear]=element;
        printf("%d is enqueued\n",element);
        order[rear]=priority;
    }
}

void display(){
    for(int i=front ; i<=rear ; i++){
        printf("\nElement : %d  -  priority : %d",pqueue[i],order[i]);
    }
    printf("\n");
}

void dequeue(){
    int max = order[front] , pos=front , deletedElement=pqueue[front] , i , j;

    if(front==rear){
        printf("%d is dequeued\n",pqueue[front]);
        front=-1;
        rear=-1;
    }
    else{
        for(i=front+1 ; i<=rear ; i++)
            if(order[i]>max){
                max = order[i];
                deletedElement = pqueue[i];
                pos = i; 
            }
        for(i=pos ; i<rear ; i++){
                order[i]=order[i+1];    
                pqueue[i]=pqueue[i+1];
        }
        rear--;
        printf("%d is dequeued\n",deletedElement);
    }
}
