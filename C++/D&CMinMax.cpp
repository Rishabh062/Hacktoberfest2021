#include <iostream>

using namespace std;

struct node{
    int min;
    int max;
};

int arr[10];

struct node maxmin(int i,int j)
{
    struct node minmax;
    struct node minmax1,minmax2;
     int mid;

    if(i==j)
    minmax.min=minmax.max=arr[i];
    else if(i==j-1)
    {
        if(arr[i]>arr[j])
        minmax.max=arr[i],minmax.min=arr[j];
        else
        minmax.max=arr[j],minmax.min=arr[i];
    }
    else
    {
        mid = (i+j)/2;

        minmax1=maxmin(i,mid);
        minmax2=maxmin(mid+1,j);

        if(minmax1.max>minmax2.max)
        minmax.max=minmax1.max;
        else
         minmax.max=minmax2.max;

          if(minmax1.min<minmax2.min)
        minmax.min=minmax1.min;
        else
         minmax.min=minmax2.min;
    }

    return minmax;
}

int main()
{
    for(int i=0;i<10;i++)
    cin>>arr[i];

    struct node mnmx;
   mnmx= maxmin(0,9);

    std::cout << "min " << mnmx.min << std::endl;
    std::cout << "max " << mnmx.max << std::endl;
    return 0;
}
