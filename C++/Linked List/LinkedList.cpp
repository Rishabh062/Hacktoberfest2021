#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* newnode = new node(val);
    if(head == NULL){
        head = newnode;
        return;
    }
    
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    
};

void insertAtHead(node* &head, int val){
    node* newnode = new node(val);
    newnode->next = head;
    head = newnode;
};

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
};

bool search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }

    if(head->next == NULL){
        node* todelete = head;
        head = head->next;
        delete(todelete);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    delete todelete;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete(todelete);
}

int getLength(node* head){
    int count =0;
    node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    // insertAtHead(head, 8);
    // display(head);
    // cout<<search(head, 2);
    // deletion(head, 1);
    // display(head);
    // deleteAtHead(head);
    // display(head);
    // deletion(head, 1);
    // display(head);
    cout<<getLength(head);
    return 0;
}