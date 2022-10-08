// Problem Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ar[5]={4,5,1,2,3};
	int minVal=INT_MAX,i;
	for(i=0;i<5;i++){
		minVal=min(minVal,ar[i]);
	}
	cout<<"Minimum Value is "<<minVal<<endl;
	return 0;
}