#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
    clrscr();
    char str1[30],str2[30],temp[30];
    cout<<"Enter String String 1: ";
    cin>>str1;
    cout<<"Enter String String 2: ";
    cin>>str2;
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    cout<<"After Swapping  Strings are: "<<endl;
    cout<<"String 1: "<<str1;
    cout<<endl<<"String 2: "<<str2;
    getch();
}