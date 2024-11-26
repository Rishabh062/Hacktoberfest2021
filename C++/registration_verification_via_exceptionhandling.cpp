#include<iostream>
#include<string>
using namespace std;

int main()
{
	string userid;
	string password;
	string phone;
	int i,np,nn;
	char u = '@';
	
	
	cout<<"_________Registration Form_________"<<endl;;	
	cout<<"Kindly enter your user id: ";
	cin>>userid;
	cout<<"Kindly enter your password: ";
	cin>>password;
	cout<<"Kindly enter your phone number: ";
	cin>>phone;
	cout<<endl;
	
	
	//User id
	try
	{
		if(userid.find(u,0)!= string::npos)
			cout<<endl<<"   Approved user id";// do nothing
		else
			throw "\n   User id must be a valid email id";
	}
	catch(const char *msg)
	{
		cerr<<msg<<endl;
	}
	
	
	//Password
	try
	{
		 int np = password.length();      
		 bool hasLower = false, hasUpper = false, hasDigit = false; 
	  	for (int i = 0; i < np; i++) { 
		    if (islower(password[i])) 
		    	hasLower = true; 
		    if (isupper(password[i])) 
		        hasUpper = true; 
		    if (isdigit(password[i])) 
		        hasDigit = true; 
		} 
	  	 
		if ( hasUpper && hasDigit && hasLower && (np >= 6))
		    cout<<endl<<"   Strong password";//do nothing
		else
		    throw "\n   Weak password. Password must be atleast six characters long and be alphanumeric.";
		    
	}
	catch(const char *msg)
	{
		cerr<<msg<<endl;
	}
	
	
	//Phone number
	try
	{
		int nn = phone.length();
		if((nn ==10))
			cout<<endl<<"   Valid phone number"<<endl;//do nothing
		else
			throw "\n   Phone number must contain 10 digits";
	}
	catch(const char *msg)
	{
		cerr<<msg<<endl;
	}
	
	
}
