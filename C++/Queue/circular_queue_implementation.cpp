#include<iostream>
using namespace std;

struct queue{
	int front,rear,size,cap;
	int data[100];
	
	queue(){
		front=0;
		rear=0;
		cap=100;
		size=0;
	}
	
	void push(int x){
		if(cap==size)
		cout<<"Storage limit exceeded !\n";
		else{
			data[(rear++)%cap]=x;
			rear%=cap;
			size++;
		}
	}
	
	int pop(){
		if(size==0)
		{cout<<"EMPTY !!\n";return -1;}
		else{
			size--;
			front%=cap;
			return data[(front++)%cap];
		}
	}
};

int main()
{
	queue q;
	for(int i=0 ;i<110 ;i++)
	q.push(i);
	
	for(int i=0 ;i<10 ;i++)
	cout<<q.pop()<<" ";cout<<endl;
	
	for(int i=100;i<=120 ;i++)
	q.push(i);	
	
		
	for(int i=0 ;i<110 ;i++)
	cout<<q.pop()<<" ";cout<<endl;
	
	q.push(100000);
	cout<<q.pop();cout<<q.pop();	
	
}