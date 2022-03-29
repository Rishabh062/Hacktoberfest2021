#include <iostream>
using namespace std;
struct node{
    int data;
    node *prev;
    node *next;
};
class list
{
node *head, *ex;
public:
list()
    {
        head = NULL;
    }
void l_insert()
{
    node *temp;
    temp = new node;
    cout<<"enter data";
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        head = temp;
        temp->prev = head;
    }
    else
    {
        ex->next = temp; 
        temp->prev = ex;
    }
    ex = temp;

}
void l_delete()
{
    if(head!=NULL)
    {
        node *temp = head;
        head = temp->next;
        cout<<"data deleted: "<<temp->data;
        delete temp;
    }
    else
    {
        cout<<endl<<"List khali kardi :(";
    }
    
}

void l_show()
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void l_showb()
{

    node *temp = ex;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
        
    }while(temp!=head);
    cout<<temp->data<<" ";
}
};
int main()
{
  list st;
  int ch;
  do{
      cout<<"\nMain Menu"<<endl;
      cout<<"1.Insert element"<<endl;
      cout<<"2.Show list"<<endl;
      cout<<"3.Show stack"<<endl;
      cout<<"4.delete list"<<endl;
      cout<<"5.exit"<<endl;
      cout<<"Enter your Choice: ";
      cin>>ch;
      switch(ch)
      {

        case 1:st.l_insert();
                break;
        case 2:st.l_show();
                break;
        case 3:st.l_showb();
                break;
        case 4:st.l_delete();
                break;
        case 5:exit(0);
      }
      cin.get();

  }while(1);
  cin.get();
return 0;
}