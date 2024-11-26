#include <iostream>
using namespace std;

int main()
{
  int r, i, j;
  cout<<"Enter the height ";
  cin>>r;                             // This inputs the height of the butterfly or the no. of rows in the upper and lower halves
  
  for(i=1; i<=r; i++)
  {
    for(j=1; j<=i; j++)              // If the no. of columns are less than or equal to the no. of rows then we print stars
    cout<<"*";
    
    for(j=1; j<=2*(r-i); j++)       // Once the no. of columns are less than or equal to twice of the (height of the upper triangle -i) 
    cout<<" ";
    
    for(j=1; j<=i; j++)              // Creating the mirror image of the upper half of the butterfly
    cout<<"*";
    
    cout<<"\n";
  }
  for(i=r; i>=1; i--)                // Loop for the lower half of the butterfly 
  {
    for(j=1; j<=i; j++)              // If the no. of columns are greater than or equal to the no. of rows then we print stars
    cout<<"*";
      
    for(j=1; j<=2*(r-i); j++)         // Once the no. of columns are less than or equal to twice of the (height of the lower triangle -i)
    cout<<" ";
      
    for(j=1; j<=i; j++)              // Creating the mirror image of the lower half of the butterfly
    cout<<"*";
      
    cout<<"\n";
  }
  return 0;
}
