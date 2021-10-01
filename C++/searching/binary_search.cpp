#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int binary_search(int arr[],int low,int high,int target)
{
	while(high>=low)
	{
		int mid = (low+high)/2;
		if(arr[mid] == target)return mid;
		else if(arr[mid]<target)low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}
int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//code goes here

    /*The array to be search for be */
    int arr[8] = {12,14,16,18,13,122,90,325};

    /*let the target element be 325 */

    /*the function binary_search returns the position
    of target element*/

    // for binary_search arr needs to be sorted 
    sort(arr,arr+7);

    //the final arr is {12,13,14,16,18,90,122,325}
    int position_of_element = binary_search(arr,0,7,325);
    cout<<position_of_element<<endl;

    /*it returns position if the target exists or else -1 if
    it doesnt exist in arr*/
return 0;
}

/*
Time Complexity = O(log(n)) for binary search
Space Complexity = O(1)
*/