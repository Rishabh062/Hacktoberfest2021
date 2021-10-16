/*Problem: Given two integers 'a' and 'b', write a program to calculate the value of 'a' to the power 'b'(power(a,b)).
 For example if 'a' = 2 and 'b' = 3, then 2^3=8
  
  Time Complexity:O(log(b))
 
 */

#include<iostream>
using namespace std;

//using recursion 
int powerNum(int n,int p){
    //base case
    if(p<=1){
        return n;
    }
    else{
        return n*powerNum(n,p-1);
    }
}

int main(){
    //enter the two numbers
    int num,npow; 
    cin>>num>>npow;

    //Call the recursive function
    cout<<"Recursive ans is "<<powerNum(num,npow)<<endl;
    return 0;
}