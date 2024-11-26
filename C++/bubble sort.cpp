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