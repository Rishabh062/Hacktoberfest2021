
// Implemented priority queue using linklist

#include <bits/stdc++.h>
using namespace std;

struct node {
  int data;
  int pri;
  node *next;
  node(int d, int p) {
    data = d;
    pri = p;
    next = NULL;
  }
};

struct queuey {
  int size;
  node *front, *rear;
  queuey() {
    front = NULL;
    rear = NULL;
    size = 0;
  }
  void enqueue() {
    int d, p;
    cout << "Enter the Element\n";
    cin >> d;
    cout << "Enter the priority\n";
    cin >> p;
    node *temp = new node(d, p);
    if (rear == NULL) {
      front = rear = temp;
    } else if (front->pri > temp->pri) {
      temp->next = front;
      front = temp;
    } else {
      node *t = front;
      node *curr = NULL;
      while (t->next != NULL && t->next->pri <= temp->pri) {
        t = t->next;
      }
      temp->next = t->next;
      t->next = temp;
    }
    size++;
  }

  void dequeue() {
    if (front == NULL) {
      printf("The queue is empty");
      return;
    }
    node *temp = front;
    front = front->next;
    free(temp);
    size--;
  }
  void display() {
    if (front == NULL)
      cout << "Empty\n";
    else {
      node *temp;
      temp = front;
      while (temp != NULL) {
        cout << "Element =" << temp->data << " Priority = " << temp->pri
             << endl;
        temp = temp->next;
      }
      cout << endl;
    }
  }
  int Getsize() { return size; }
};

int main() {
  struct queuey q;
  int ch;
  while (1) {
    printf("\n1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Display size\n");
    printf("4.Peek\n");
    printf("5.Display the link list\n");
    printf("6.Exit\n");
    scanf("%d", &ch);
    switch (ch) {
    case 1:
      q.enqueue();
      break;
    case 2:
      q.dequeue();
      break;
    case 3:
      printf("\nThe current size of queue is: %d", q.Getsize());
      break;
    case 4:
      printf("the ele at front is:%d", q.front->data);
      break;
    case 5:
      q.display();
      break;
    case 6:
      exit(0);
    default:
      printf("Incorrect choice \n");
    }
  }
}
