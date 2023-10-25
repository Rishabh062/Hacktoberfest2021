#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// structure defined
// all functions declared inside the structure
struct queue{
    int size;
    int front;
    int rear;
    int *arr;

    queue(int s){
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // checks for empty queue
    bool isEmpty(){
        return (front == -1 && rear == -1);
    }

    // checks for a full queue
    bool isFull(){
        return (rear == (size-1) );
    }


    // pushes the elements in queue with parameter n
    void enQueue(int n){
        if(isFull()){
            cout << "The queue is FULL " << endl;
        }
        else{
            if(front == -1){
                front = 0;
            }

            rear++;
            arr[rear] = n;
            
        }
    }

    // tries to remove the element of the queue to which rear points , so does the queue operates (LIFO)
    void deQueue(){
        if(front>rear){
            cout << "The queue is EMPTY " << endl;
        }

        else{
            cout << "The dequeued element is " << arr[rear] << endl;
            front++;
        }
    }

    // prints the elements in the queue 
    void print(){
        if(isEmpty()){
            cout << "The queue is FULL " << endl;
        }

        else{
            cout << "The elements in the queue are: " << endl;
            for(int i = 0 ; i < size ; i++){
                cout << arr[i] << endl;

            }
        }
    }


};



// all functions passed in main
int main(){
    int size;
    cout << "Enter the size of the queue: ";
    cin >> size;

    // structure object defined as q
    queue q(size);

    q.enQueue(21);
    q.enQueue(30);
    q.enQueue(33);
    q.enQueue(81);

    

    q.print();

    q.deQueue();


   return 0;

}



// TIME complexity - O(1) (big-Oh(1)) all the mentioned operations run in constant time.
// SPACE complexity - O(1) (big-Oh(1))