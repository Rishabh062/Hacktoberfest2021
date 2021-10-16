// This folder contain the seraching Algorithm named Binary search of complexity logn//

#include <bits/stdc++.h>
using namespace std;
 


int binsrch(,int arr[],int lo,int hi,int k)
{
    while(lo<hi)
    {
        int mid=(lo+hi)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]>k)
        {
            hi=mid-1;
        }
        else
        lo =mid+1;
    }
    
    return -1;// if k is not present in array//
 
}
 
 
int main()
{  
   int n=7;
    int arr[n]={2,3,4,5,6,7,8};
 
   //it is being given array is sorted
   //if not then we have to sort it
 
  //element to be searched in array
   int k=8;
 
   int index=binsrch(arr,0,n,k);
   cout<<index<<endl;
 
    return 0;
}
