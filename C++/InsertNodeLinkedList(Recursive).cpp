#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}

};
node*takeinput(){
	int data;
	node*head=NULL;
	node*tail=NULL;
	cin>>data;
	while(data!=-1){
		node*n=new node(data);
		if(head==NULL){
			head=n;
			tail=n;
		}
		else{
			tail->next=n;
			tail=n;
		}
		cin>>data;
	}
	return head;
}

void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

void insertrecursive(node*head,int pos,int no){
	if(head==NULL)
	return;
	else{
		if(pos==0){
			node*n=new node(no);
			n->next=head->next;
			head->next=n;
			return;
		}
		else{
			head=head->next;
			insertrecursive(head,pos-1,no);
		}
	}
}
int main(){
	int one,pos,no;
	node*head=takeinput();
	print(head);
	cout<<"Press 1 to insert node";
	cin>>one;
	if(one==1){
		cout<<"enter the position to be inserted at: ";
		cin>>pos;
		cout<<"enter the number to be inserted: ";
		cin>>no;
		insertrecursive(head,pos,no);
		print(head);
	}
	return 0;
}
