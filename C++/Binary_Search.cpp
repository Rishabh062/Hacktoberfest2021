#include<iostream>
using namespace std;
// recursive function for binary search
/* if match found then return index of search key
   else return -1 */
int binarySearch(int arr[], int low, int high, int key) {
  if (high >= low) {
    // find middle index
    int mid = low + (high - low) / 2; 
     
    // find middle term and compare
    if (arr[mid] == key) return mid; // key found 
     
    // If key is smaller than middle term, then 
    // it can only be present in left subarray 
    if (arr[mid] > key) 
      return binarySearch(arr, low, mid - 1, key); 
    
    // Else the key can only be present 
    // in right subarray 
    return binarySearch(arr, mid + 1, high, key); 
  } 
     
  // key not found
  return -1; 
}

// main function
int main()
{
  int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int key = 0;

  // take input for the search key
  cout << "Enter Search Element: ";
  cin >> key;

  // find the size array
  int size = sizeof(array)/sizeof(array[0]);

  // search key
  int index = binarySearch(array, 0, size, key);
  
  // display result
  if(index == -1)
    cout << key << " Not Found" << endl;
  else
    cout << key << " Found at Index = " << index << endl;

  return 0;
}
