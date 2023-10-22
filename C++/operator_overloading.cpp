#include<iostream>
#include<string.h>
#include <string>
#include<stdlib.h>
using namespace std;

class str {
	public:
		char s[25];
		str() { };

		str(char st[])
		{
			strcpy(this->s,st );
		}

		str operator +(str const &obj)
		{
			str s3;
			strcpy(s3.s,this->s);
			strcat(s3.s,obj.s);
			return s3;
		}
		
		str operator =(str const &obj)
		{
			strcpy(this->s,obj.s);
			return s;
		}

		str operator -(str const &obj)
		{
			int i, j = 0, k = 0,n = 0;
			int flag = 0;
		 	str s3;
			strcpy(s3.s,s);
			
			char neww[25];
			for(i = 0 ; s3.s[i] != '\0' ; i++)
			{
				k = i;
				while(s3.s[i] == obj.s[j])
				{
				    i++,j++;
				    if(j == strlen(obj.s))
				    {
				        flag = 1;
				        break;
				    }
				}
			j = 0;

			if(flag == 0)
				i = k;      
			else
				flag = 0;

			s3.s[n++] = s[i];
			}

			s3.s[n] = '\0';
			return s3;
		
		}

		str operator <=(str const &obj)
		{
			str s3;
			strcpy(s3.s,this->s);
			if(strcmp(s3.s,obj.s)==0)
				cout<<"Same";
			else
				cout<<"Different";
			return s3;
		}
		
		void operator ++()
		{
			for(int i = 0;i<strlen(this->s);i++)
				this->s[i]=toupper(this->s[i]);
		}

		void operator --()
		{
			for(int i = 0;i<strlen(this->s);i++)
				this->s[i]=tolower(this->s[i]);
		}

		

		

		int length(str const &obj)
		{
			str s3;
			int len;
			strcpy(s3.s,this->s);
			len=strlen(this->s);
			cout<<"Length of string  '"<<s<<"' is: "<<len<<endl;;
			return len;
		}


};

int main()
{
	int ch;
	char s1[25]="B.Tech",s2[25]="Csbs",s3[25];
	str o1(s1);
	str o2(s2);
	str o3;
	
	
	
	cout<<"________________________________________________Operator Overload Menu_________________________________________________"<<endl;
	cout<<"1.Show String 1 and String 2\t\t\t\t\t2.Enter '+' to carry out the concatenation of strings"<<endl;
	cout<<"3.Enter '=' to carry out string copy\t\t\t\t4.Enter '-' to carry out sub-string removal"<<endl;
	cout<<"5.Enter '<=' to carry out the comparison of strings\t\t6.Enter '++' to change string characters to upper case"<<endl;
	cout<<"7.Enter '--' to change string characters to lower case\t\t8.Display length of strings"<<endl;
	cout<<"9.Exit"<<endl;
	
	
	
	
	
	
	while(1)
	{
		cout<<endl<<endl<<"Kindly enter your choice: ";
		cin>>ch;
		
		switch(ch) {
			case 1:
				cout<<"String 1: "<<s1;
				cout<<endl<<"String 2: "<<s2<<endl;
				break;
			
			case 2:
				
				o3=o1+o2;
				cout<<"The concatenation of "<<s1<<" and "<<s2<<" is: "<<o3.s<<endl;
				break;
			
			case 3:
				cout<<"Original String 1: "<<s1;
				cout<<endl<<"Original String 2: "<<s2<<endl;
				cout<<"After copying String 2 into String 1 where String1=String2";
				o1 = o2;
				cout<<endl<<o1.s<<" = "<<o2.s<<endl;
				break;
			
			case 4:
				cout<<"String: "<<o3.s<<endl;
				cout<<s1<<endl;
				cout<<s2<<endl;
				break;
			
			case 5:
				cout<<"String 1: "<<o1.s;
				cout<<endl<<"String 2: "<<o2.s<<endl;
				cout<<"String 3: "<<o3.s<<endl;
				cout<<"Comparison of String 1 and String 3: ";
				o3<=o1;
				cout<<endl<<"Comparison of String 1 and String 2: ";
				o2<=o1;
				
				
				break;
			
			case 6:
				
				o1="B.Tech";
				++o1;
				++o2;
				++o3;
				cout<<"String 1: "<<o1.s;
				cout<<endl<<"String 2: "<<o2.s;
				cout<<endl<<"String 3: "<<o3.s;
				break;
			
			case 7:
				
				--o1;
				--o2;
				--o3;
				cout<<"String 1: "<<o1.s;
				cout<<endl<<"String 2: "<<o2.s;
				cout<<endl<<"String 3: "<<o3.s;
				break;
			
			case 8:
				
				o1.length(o1);
				o2.length(o2);
				o3.length(o3);
				break;
			
			case 9:
				cout<<"Succesfully exiting program"<<endl;
				exit(0);
				

			default:
				cout<<"Wrong choice"<<endl;
				break;
			}
		}
		return 1;
}	
			
	

/*
	char s1[25]="B.Tech";
	char s2[25]="csbs";
	str o1(s1);
	str o2(s2);
	str o3;
	o3=o1+o2;
	cout<<o3.s;

	++o1;
	cout<<endl<<o1.s;

	o1 = o2;
	cout<<endl<<o1.s<<" = "<<o2.s<<endl;

	o3<=o1;

	--o3;
	cout<<endl<<o3.s;

	o3.length(o3);




	return 1;
}*/
