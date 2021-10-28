//Problem statement: Create queue and demonstrate various operations performed in it.
#include<stdio.h>
#include<stdlib.h>
//Create structure for queue
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
//Check whether queue is full
int isFull(struct queue* q){
    if(q->r==q->size-1){
        return 1;
    }
    else{ return 0; }
}
//Check whether queue is empty
int isEmpty(struct queue* q){
    if(q->r==q->f){
        return 1;
    }
    else{ return 0; }
}
//Insertion in queue
void enqueue(struct queue* q, int val){
    if(isFull(q)){
        printf("Queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
//Deletion in queue
int dequeue(struct queue* q){
    int a=-1;
    if(isEmpty(q)){
        printf("Queue is empty");
        return -1;
    }
    else{
        q->f++;
        a = q->arr[q->f];
        return a;
    }
}
//Queue traversal
void queueTraverse(struct queue* q){
    for(int i=q->r; i>q->f; i--){
        printf("Element: %d\n", q->arr[i]);
    }
}
int main(){
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size*sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 23);
    enqueue(&q, 34);
    enqueue(&q, 45);
    enqueue(&q, 56);
    queueTraverse(&q);
    printf("Removed element: %d\n", dequeue(&q));
    queueTraverse(&q);
    return 0;
}
