//[PROG] -> LINEAR SEARCH USING C++

#include<iostream>
using namespace std;

int main(){

    // Creatig a dynamic array
    int n,*arr,key,i;

    //Entering the size of array
    cout<<"Enter the size of array: ";
    cin>>n;
    arr = new int [n];

    //Inserting the values in the array
    cout<<"Enter the values in the array: ";
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }

    //Entering the search value
    cout<<"Enter the value to seacrh: ";
    cin>>key;

    //Traversing the array to search the value which was entered by the user
    for(i=0;i<n;i++){
        if(*(arr+i)==key){
            cout<<"Element found at "<<i+1<<" position"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Element not found"<<endl;
    }

    //Freeing up the space occupied by the array
    delete [] arr;

    return 0;
}