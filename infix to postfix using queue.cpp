#include<iostream>
#include<bits/stdc++.h>
//#include<string>
using namespace std;
class Queue
{   
    public:
    Queue* next;
    char data;
    
    Queue* front=NULL;Queue* q=NULL;Queue* rear=NULL;Queue* p=NULL;Queue* np=NULL;int size=0;

    void enqueue(char x)
    {
        np=new Queue;
        np->data=x;
        np->next=NULL;
        if(front==NULL)
        {
            rear=np;
            rear->next=NULL;
            front=rear;
            size++;
            //cout<<front->data<<endl;
        }
        else
        {
            rear->next=np;
            rear=np;
            rear->next=NULL;
            size++;
            //cout<<rear->data<<endl;
        }

    }

    char dequeue()
    {
        char x;
        if(front==NULL)
        {
            cout<<"empty"<<endl;
            return 0;
        }
        else
        {
            q=front;
            front=front->next;
            x=q->data;
            delete(q);
            size--;
            return x;
        }
    }
     

};
class Stack
{
   public:
   Queue q1;
   Queue q2;

   void push(char x)
   {
    q1.enqueue(x);
    return;
   }
   void pop()
   {
       if(q1.front!=NULL)
       {
        int Size=q1.size;
        for(int i=0;i<Size-1;i++)
        q2.enqueue(q1.dequeue());
        char item=q1.dequeue();
        for(int j=0;j<Size-1;j++)
        q1.enqueue(q2.dequeue());

        //cout<<item<<endl;
            
        
       }

   }
   char Top()
   {
    if(q1.rear==NULL)
    return 0;
    else
    {
        char x=q1.rear->data;
        return x;
    }
   }

   int empty()
   {    
        int x=0;
        try
        {
            if(q1.front==NULL)
            throw x;
        }
        catch(int x)
        {
            cout<<"stack is empty!!"<<endl;
            return 0;
        }
        return 1;
   }

};

bool isOperator(char c)
{
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int preced(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
}

string InfixToPostfix(string infix)
{
	string postfix="";   //initially the postfix string is empty
    Stack stk;
	stk.push('#');               //add some extra character to avoid underflow
          
   string::iterator it;

   for(it = infix.begin(); it!=infix.end(); it++) 
   {
      if(isalnum(char(*it)))  // number or letter
         postfix += *it;     
      else if(*it == '(')
         stk.push('(');
      else if(*it == '^')
         stk.push('^');
      else if(*it == ')') 
      {
         while(stk.Top() != '#' && stk.Top() != '(') 
         {
            postfix += stk.Top(); 
            stk.pop();
         }
         stk.pop();          
      }
      else 
      {
         if(preced(*it) > preced(stk.Top()))
            stk.push(*it); 
         else 
         {
            while(stk.Top() != '#' && preced(*it) <= preced(stk.Top())) 
            {
               postfix += stk.Top();        
               stk.pop();
            }
            stk.push(*it);
         }
      }
   }

   while(stk.Top() != '#') 
   {
      postfix += stk.Top();     
      stk.pop();
   }

	
	return postfix;
}

bool is_infix_crct(string infix)
{   
    Stack s1;
    bool valid=true;
    char top;
   
         
           string::iterator it;

           for(it = infix.begin(); it!=infix.end(); it++) 
           {
              if(isalnum(char(*it)))
              valid=true;
              else if(char(*it)=='+' || char(*it)=='-' || char(*it)=='*' || char(*it)=='/' )
              valid=true;
              else
              {
              valid=false;
              break;
              }
           }
              return valid;
           }

       


            
     
	

int main()
{   
    int ch;
    string s1;
    cout<<"****menu****"<<endl;
    cout<<"1.Get Infix Expression\n2.Print Infix Expression\n3.Print Postfix Expression\n4.Exit"<<endl;
    cout<<"enter your choice : ";
    cin>>ch;
    while(ch<0 & ch>4)
    {
        cout<<"enter valid choice : ";
        cin>>ch;
    }
    while(ch)
    {
        switch(ch)
        {
            case 1 :
            {
                cin>>s1;
                try
                {
                    if(is_infix_crct(s1) == false)
                    throw is_infix_crct(s1);
                }
                catch(bool is_infix_crct)
                {
                    cout<<"enter a valid expression"<<endl;
                }
                cout<<"\n****menu****"<<endl;
                cout<<"1.Get Infix Expression\n2.Print Infix Expression\n3.Print Postfix Expression\n4.Exit"<<endl;
                cout<<"enter your choice : ";
                cin>>ch;
                break;
            }

            case 2 :
            {
               
               cout<<s1;
               cout<<"\n****menu****"<<endl;
               cout<<"1.Get Infix Expression\n2.Print Infix Expression\n3.Print Postfix Expression\n4.Exit"<<endl;
               cout<<"enter your choice : ";
               cin>>ch;

               break;

            }
            case 3 : 
            {
                string s2;
                s2=InfixToPostfix(s1);
                cout<<s2<<endl;
                cout<<"\n****menu****"<<endl;
                cout<<"1.Get Infix Expression\n2.Print Infix Expression\n3.Print Postfix Expression\n4.Exit"<<endl;
                cout<<"enter your choice : ";
                cin>>ch;

               break;



            }
            case 4 : 
            {
                cout<<"closing programme....";
                return 0;

            }
        }
    }
    


}