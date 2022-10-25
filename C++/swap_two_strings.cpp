#include <iostream>

#include <cstring> //string library

using namespace std;

int main() {
    int n; //length of string
    cin>>n;
    char s1[n];
    char s2[n];
    char s3[n]; //temporary string
    //Input String 1
    cin>>s1;
    //Input String 2
    cin>>s2;
    strcpy(s3,s1); //copy contents of s1 in s3
    strcpy(s1,s2);  // similar to  s1=s2
    strcpy(s2,s3);
    cout<<s1<<"\n";
    cout<<s2;
    return 0;
}

//Simple C++ program to swap between two inputed string using String library
