#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *next;
	node *previous;
};
int main(){
	node *start=NULL,*temp,*ptr,*temp3=NULL;
	int a;
	while(1>0){
		cout<<"enter 1 to scan data and 2 to display"<<endl;
		cin>>a;
		if(a==1){
			ptr=new node();
			cin>>ptr->data;
			ptr->next=NULL;
			ptr->previous=NULL;
			if(start==NULL){
				start=ptr;
				
			}
			else{
				temp=start;
				while(temp->next!=NULL){
						temp3=temp;
					temp=temp->next;
				}
				temp->previous=temp3;
				temp->next=ptr;
				
			}
		
	
	}
	else{
		temp=start;
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
}
}