
/* Algorithm
General Algorithm
Step 1: For i = 0 to N-1 repeat Step 2
Step 2: For J = i + 1 to N – I repeat
              Step 3: if A[J] > A[i]
Swap A[J] and A[i]
[End of Inner for loop]
[End if Outer for loop]
Step 4: Exit
*/

//code
#include<bits/stdc++.h>

using namespace std;

void bubblesort(int arr[],int n)
{
    for(int p=0; p<n-1; p++)
    {
        for(int i=0; i<n-p-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr, n);
    display(arr,n);
}