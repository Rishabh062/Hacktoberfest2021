#include<iostream>
using namespace std;
class Account{
private:
    string coustomer_name;
    int account_number;
    string account_type;
public:
    Account(){};
    Account(string coust_nam,int acc_no,string acc_typ):coustomer_name(coust_nam),account_number(acc_no),account_type(acc_typ){};
    void display()
    {
        cout<<"ACCOUNT HOLDER NAME: "<<coustomer_name<<endl;
        cout<<"ACCOUNT NUMBER: "<<account_number<<endl;
        cout<<"ACCOUNT TYPE: "<<account_type<<endl;
    }
};
class Current_Account:public Account
{
private:
    float amount=0;
public:
    Current_Account(){};
    Current_Account(string name,int no,string actyp):Account(name,no,actyp){};
    void deposit(float money)
    {
        amount=amount+money;
        cout<<endl<<"AMOUNT DEPOSITED: "<<money<<endl;
    }
    void withdraw(float w_money)
    {
        if(w_money>amount)
        {
            cout<<endl<<"SORRY! YOUR BANK BALANCE IS LOW TO MAKE THIS TRANSACTION"<<endl;
        }
        else{
        amount=amount-w_money;
        cout<<endl<<"AMOUNT WITHDRAWL: "<<w_money<<endl;}
    }
    void display_bal()
    {
        cout<<endl<<"YOUR BANK BALANCE: "<<amount<<endl;
    }

};
class Savings_Account:public Account
{
    float amount=0;
    public:
    Savings_Account(){};
    Savings_Account(string name,int no,string actyp):Account(name,no,actyp){};
    void deposit(float money)
    {
        amount=amount+money;
        cout<<endl<<"AMOUNT DEPOSITED: "<<money<<endl;
    }
    void withdraw(float w_money)
    {
        if(w_money>amount)
        {
            cout<<endl<<"SORRY! YOUR BANK BALANCE IS LOW TO MAKE THIS TRANSACTION"<<endl;
        }
        else{

        amount=amount-w_money;
        cout<<endl<<"AMOUNT WITHDRAWL: "<<w_money<<endl;
        if(amount<2000)
        {
            amount=amount-20.00;
            cout<<"RS-17.50 IS DEDUCTED BECAUSE YOUR BALANCE IS BELOW 2000"<<endl;
        }
        }

    }
    void display_bal()
    {
        cout<<endl<<"YOUR BANK BALANCE: "<<amount<<endl;
    }

};
int main()
{
      int n;
    float b,c;
    Current_Account a("Atreyo",1111201454,"current");
    a.display();

    while(1){
    cout<<"***********************************"<<endl;
    cout<<"PRESS 1 TO KNOW YOUR BANK BALANCE"<<endl;
    cout<<"PRESS 2 FOR DEPOSIT MONEY"<<endl;
    cout<<"PRESS 3 FOR WITHDRAWL MONEY"<<endl;

    cin>>n;

    switch(n)
    {
    case(2):
        cout<<"ENTER THE DEPOSITED AMOUNT"<<endl;
        cin>>b;
         a.deposit(b);
            a.display_bal();
        break;
    case(3):
        cout<<"ENTER THE WITHDRAWLED AMOUNT"<<endl;
        cin>>c;
    a.withdraw(c);
    a.display_bal();
    break;
    case(1):
        a.display_bal();
        break;
    default:
        break;
    }
    }
    Savings_Account d("Atreyo ",1111110002145,"SAVINGS");
    d.display();
    while(1){
    cout<<"***************************"<<endl;
    cout<<"PRESS 1 TO KNOW YOUR BANK BALANCE"<<endl;
    cout<<"PRESS 2 FOR DEPOSIT MONEY"<<endl;
    cout<<"PRESS 3 FOR WITHDRAWL MONEY"<<endl;

    cin>>n;

    switch(n)
    {
    case(2):
        cout<<"ENTER THE DEPOSITED AMOUNT"<<endl;
        cin>>b;
         d.deposit(b);
            d.display_bal();
        break;
    case(3):
        cout<<"ENTER THE WITHDRAWLED AMOUNT"<<endl;
        cin>>c;
    d.withdraw(c);
    d.display_bal();
    break;
    case(1):
        d.display_bal();
        break;
    default:
        break;
    }
    }
}