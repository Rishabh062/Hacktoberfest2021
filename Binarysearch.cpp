#include <stdio.h>
#include <conio.h>
int binarysearch(int arr[], int l ,int r,int x )
{    
while(l <= r)  
{
   int mid = l + (r - l) / 2;
   if(arr[mid]==x)
   return mid;
   if(arr[mid]<x)
   l = mid + 1;
   else
   r = mid - 1;
}    
    return -1;
}
int main(){
    int i, n, x, a[100], result;
    clrscr();
    printf("Enter the size of the array=");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)  
  {
    scanf("%d",&a[i]);
  }
    printf("Enter the element to be searched=");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    if(a[i]==x)
    {
    result=i;
    printf("Element is found at index=%d\n",result);
    }
    else
    if(result== -1)
    {
    printf("Element not found");
    }
    getch();
    return 0;
    }
