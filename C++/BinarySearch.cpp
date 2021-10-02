//Time Complexity= Log(n)Base2
#include <iostream>
using namespace std;
int binarysearch(int a[],int n,int num){
    int beg=0;
    int end=n-1;
    int mid;
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid]==num)
            return mid;
        else if(a[mid]<num)
            beg=mid+1;
        else
            end=mid-1;
    }
    return -1;
}
int main()
{
    int a[10]={11,22,33,44,55,66,77,88,99,100};
    int x=binarysearch(&a[0],10,100);
    if(x>0)
        cout<<"The num found at index "<<x<<endl;
    else 
    cout<<"Bye Bye Khatam Tata\n";
    return 0;
}
