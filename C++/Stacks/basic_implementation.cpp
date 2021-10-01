#include<iostream>
using namespace std;

template <typename T>
struct stack{
	
	int i;
	T* data;
	
	stack(){
		this->i=-1;
		data = new T[100];
	}
	
	void push(T x){
		if(i==99)
		cout<<"Storage Limit Exceeded !!";
		else
		data[++i]=x;
	}
	
	int top(){
		if(i==-1) cout<<"EMPTY !!";
		else return data[i];
	}
	
	bool empty(){
		if(i==-1) return true;
		return false;
	}
	
	int pop(){
		if(i==-1) cout<<"EMPTY !!";
		else return data[i--];
	}
	
	void bottom_push(T x){
		if(empty()) {push(x);return ;}
		
		T p = pop();
		
		bottom_push(x);
		
		push(p);
	}
};

int main(){
	stack<int> st;
	for(int i=0 ;i<=10 ;i++)
	st.push(i+1);
	
	for(int i=10 ;i>0 ;i--)
	st.bottom_push(i);
	
	for(int i=0 ;i<=20 ;i++)
	cout<<st.pop()<<" ";
	
}
