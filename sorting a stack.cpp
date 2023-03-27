#include<iostream>
#include<stack>
using namespace std;

void InsertWithSort(stack<int>&st,int x)
{
    if(st.empty() or x> st.top())
    {
        st.push(x);
        return;
    }
    int temp=st.top();
    st.pop();
    InsertWithSort(st,x);
    st.push(temp);

}

void Sort(stack<int>&st)
{
    int temp;
    if(!st.empty())
     {
       temp=st.top();
       st.pop();
       Sort(st);

       InsertWithSort(st,temp);
     }


}

int main()
{
    int n,value;

    cout<<"Enter number of elements you want to insert: ";
    cin>>n;

    stack<int>s;

    cout<<"Enter the elements of stack: ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        s.push(value);
    }

    Sort(s);

    cout<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }


}
