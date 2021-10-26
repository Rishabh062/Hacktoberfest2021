Write a C++ Program to Reverse elements in an array
/*  C++ Program to Reverse elements in an array  */

#include<iostream>
using namespace std;

int main()
{
   int a[20],b[20],i,j,size;

   cout<<"Enter array size( Max:50 ) :: ";
    cin>>size;
        cout<<"\nEnter array elements :: \n";

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }

  cout<<"\nThe Entered Array is :: \n\n";

  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }

   cout<<"\n\nReverse of Given Array is :: \n\n";

   for(i=size-1,j=0; i>=0;i--,j++)
   {
    b[i]=a[j];
   }

   for(i=0;i<size;i++)
  {
  cout<<" "<<b[i]<<" ";
  }

  cout<<"\n";

  return 0;
  }
OUTPUT : :
/*  C++ Program to Reverse elements in an array  */

Enter array size( Max:50 ) :: 7

Enter array elements ::

Enter arr[0] Element :: 1

Enter arr[1] Element :: 2

Enter arr[2] Element :: 3

Enter arr[3] Element :: 4

Enter arr[4] Element :: 5

Enter arr[5] Element :: 6

Enter arr[6] Element :: 7

The Entered Array is ::

 1  2  3  4  5  6  7

Reverse of Given Array is ::

 7  6  5  4  3  2  1

Process returned 0
Above is the source code for C++ Program to Reverse elements in an array which is successfully compiled and run on Windows System.The Output of the program is shown above .
