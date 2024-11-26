// Combinations of Balanced Parenthesis

#include<bits/stdc++.h>
using namespace std;

void solve(int o,int c,string op)
{
    if(o==0 && c==0)
    {
        cout<<op<<" ";
        return;
    }


    if(o!=0)
    {
        string op1=op;
        op1.push_back('(');
        solve(o-1,c,op1);
    }


    if(o<c)
    {
        string op2=op;
        op2.push_back(')');
        solve(o,c-1,op2);
    }

    return;



}



int main()
{
    int n,o,c;
    cout<<"\nEnter the Number\n";
    cin>>n;
    o=c=n;
    string op=" ";
    cout<<endl;
    solve(o,c,op);

    return 0;


}
