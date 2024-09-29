//write a progrom to convert decimal to binary.
//Downloaded From www.turboc8.com coded by Yogendra Singh.
#include <stdio.h>
#include<conio.h>
#include<iostream.h>
 
int main()
{
clrscr();
cout<<"                         www.turboc8.com"<<endl;
    int n,p,c,k,count=0;
cout<<"Enter the number to find ";
cin>>n;
p=n;
while(p)//ye kevel no of digit nikalne kai liye hai
{
      p=p/10;
      count++;
  }
    
  cout<<"in binary number system is:";
  if (count=1)
  count=2;
 c=count*count*count;
  for (c; c >= 0; c--)//cout is the no of digit
  {
    k = n >> c;
 
    if (k & 1)
      cout<<"1";
    else
      cout<<"0";
  }
 
  cout<<"\n";
 getch();
  return 0;
}
