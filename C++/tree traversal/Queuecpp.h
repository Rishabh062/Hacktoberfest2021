#include <stdio.h>
#ifndef Queuecpp_h
#define Queuecpp_h

class Node{
    public:
        Node *lchild,*rchild;
        int data;
};

class Queue{
    private:
        int size;
        int front;
        int rear;
        Node **Q;
    public:
        Queue(){front=rear=-1;size=10; Q=new Node *[size];}
        
        Queue(int size){front=rear=-1;this->size=size; Q=new Node *[this->size];}

        void enqueue(Node *x);
        Node* dequeue();
        int isEmpty(){return front==rear;}
        void display();
};


void Queue::enqueue(Node *x){
    if (rear==size-1)
        printf("Queue is Full...");
    else{
        rear++;
        Q[rear]=x;
    }
}

Node* Queue::dequeue(){
    Node* x=NULL;
    if(front==rear)
        printf("Queue is Empty...");
    else{
        front++;
        x=Q[front];
    }
    return x;
}

void Queue::display(){
    for (int i = front+1; i <= rear; i++)
        printf("%d ",Q[i]);
    printf("\n");
}


#endif