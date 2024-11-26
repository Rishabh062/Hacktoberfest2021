#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int sequential_search(int arr[],int target,int n)
{
	int i,flag = 0,position;
	for(int i=0;i<n;i++)
	{
		if(target == arr[i])
		{
			position = i;
			flag = 1;
			break;
		}
	}
	if(flag == 1)return position;
	else return -1;
}
int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//code goes here

    /*The array to be search for be */
    int arr[8] = {12,14,16,18,13,122,90,325};

    /*let the target element be 18 */

    /*the function sequential_search returns the position
    of target element*/
    int position_of_element = sequential_search(arr,18,8);
    cout<<position_of_element<<endl;

    /*it returns position if the target exists or else -1 if
    it doesnt exist*/
return 0;
}

/*
Time Complexity = O(n)
Space Complexity = O(1)
*/