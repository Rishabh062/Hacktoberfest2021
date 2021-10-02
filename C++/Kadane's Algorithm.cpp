#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int>v1;
	//To choose the starting point of subarray
	for(int i=0;i<n;i++)
	{
        //To choose the end point of subarray
        for(int j=i;j<n;j++)
    	{
        	int temp_sum= 0;
            //Finding the sum of the subarray
            for(int k=i;k<=j;k++)
        	{
        	    temp_sum = temp_sum + arr[k];
            }
            v1.push_back(temp_sum);// storing sum in a vector
    	}
	}
	//To print the individual subarray sum..
    cout << "Sum of individual Subarray: ";
    for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
    cout << endl;
	//To print the maximum sum contiguous subarray
	cout << "Maximum Sum Contiguous Subarray = "<< *max_element(v1.begin(), v1.end());
    return 0;
}
