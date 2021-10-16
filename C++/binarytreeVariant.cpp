// C++ program to variants of Binary Search
#include <bits/stdc++.h>

using namespace std;

int n = 8; // array size
int a[] = { 2, 3, 3, 5, 5, 5, 6, 6 }; // Sorted array

/* Find if key is in array
* Returns: True if key belongs to array,
*		 False if key doesn't belong to array */
bool contains(int low, int high, int key)
{
	bool ans = false;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		int midVal = a[mid];

		if (midVal < key) {

			// if mid is less than key, all elements
			// in range [low, mid] are also less
			// so we now search in [mid + 1, high]
			low = mid + 1;
		}
		else if (midVal > key) {

			// if mid is greater than key, all elements
			// in range [mid + 1, high] are also greater
			// so we now search in [low, mid - 1]
			high = mid - 1;
		}
		else if (midVal == key) {

			// comparison added just for the sake
			// of clarity if mid is equal to key, we
			// have found that key exists in array
			ans = true;
			break;
		}
	}

	return ans;
}

/* Find first occurrence index of key in array
* Returns: an index in range [0, n-1] if key belongs
*		 to array, -1 if key doesn't belong to array
*/
int first(int low, int high, int key)
{
	int ans = -1;

	while (low <= high) {
		int mid = low + (high - low + 1) / 2;
		int midVal = a[mid];

		if (midVal < key) {

			// if mid is less than key, all elements
			// in range [low, mid] are also less
			// so we now search in [mid + 1, high]
			low = mid + 1;
		}
		else if (midVal > key) {

			// if mid is greater than key, all elements
			// in range [mid + 1, high] are also greater
			// so we now search in [low, mid - 1]
			high = mid - 1;
		}
		else if (midVal == key) {

			// if mid is equal to key, we note down
			// the last found index then we search
			// for more in left side of mid
			// so we now search in [low, mid - 1]
			ans = mid;
			high = mid - 1;
		}
	}

	return ans;
}

/* Find last occurrence index of key in array
* Returns: an index in range [0, n-1] if key
			belongs to array,
*		 -1 if key doesn't belong to array
*/
int last(int low, int high, int key)
{
	int ans = -1;

	while (low <= high) {
		int mid = low + (high - low + 1) / 2;
		int midVal = a[mid];

		if (midVal < key) {

			// if mid is less than key, then all elements
			// in range [low, mid - 1] are also less
			// so we now search in [mid + 1, high]
			low = mid + 1;
		}
		else if (midVal > key) {

			// if mid is greater than key, then all
			// elements in range [mid + 1, high] are
			// also greater so we now search in
			// [low, mid - 1]
			high = mid - 1;
		}
		else if (midVal == key) {

			// if mid is equal to key, we note down
			// the last found index then we search
			// for more in right side of mid
			// so we now search in [mid + 1, high]
			ans = mid;
			low = mid + 1;
		}
	}

	return ans;
}

/* Find index of first occurrence of least element
greater than key in array
* Returns: an index in range [0, n-1] if key is not
			the greatest element in array,
*		 -1 if key is the greatest element in array */
int leastgreater(int low, int high, int key)
{
	int ans = -1;

	while (low <= high) {
		int mid = low + (high - low + 1) / 2;
		int midVal = a[mid];

		if (midVal < key) {

			// if mid is less than key, all elements
			// in range [low, mid - 1] are <= key
			// then we search in right side of mid
			// so we now search in [mid + 1, high]
			low = mid + 1;
		}
		else if (midVal > key) {

			// if mid is greater than key, all elements
			// in range [mid + 1, high] are >= key
			// we note down the last found index, then
			// we search in left side of mid
			// so we now search in [low, mid - 1]
			ans = mid;
			high = mid - 1;
		}
		else if (midVal == key) {

			// if mid is equal to key, all elements in
			// range [low, mid] are <= key
			// so we now search in [mid + 1, high]
			low = mid + 1;
		}
	}

	return ans;
}

/* Find index of last occurrence of greatest element
less than key in array
* Returns: an index in range [0, n-1] if key is not
			the least element in array,
*		 -1 if key is the least element in array */
int greatestlesser(int low, int high, int key)
{
	int ans = -1;

	while (low <= high) {
		int mid = low + (high - low + 1) / 2;
		int midVal = a[mid];

		if (midVal < key) {

			// if mid is less than key, all elements
			// in range [low, mid - 1] are < key
			// we note down the last found index, then
			// we search in right side of mid
			// so we now search in [mid + 1, high]
			ans = mid;
			low = mid + 1;
		}
		else if (midVal > key) {

			// if mid is greater than key, all elements
			// in range [mid + 1, high] are > key
			// then we search in left side of mid
			// so we now search in [low, mid - 1]
			high = mid - 1;
		}
		else if (midVal == key) {

			// if mid is equal to key, all elements
			// in range [mid + 1, high] are >= key
			// then we search in left side of mid
			// so we now search in [low, mid - 1]
			high = mid - 1;
		}
	}

	return ans;
}

int main()
{
	printf("Contains\n");
	for (int i = 0; i < 10; i++)
		printf("%d %d\n", i, contains(0, n - 1, i));

	printf("First occurrence of key\n");
	for (int i = 0; i < 10; i++)
		printf("%d %d\n", i, first(0, n - 1, i));

	printf("Last occurrence of key\n");
	for (int i = 0; i < 10; i++)
		printf("%d %d\n", i, last(0, n - 1, i));

	printf("Least integer greater than key\n");
	for (int i = 0; i < 10; i++)
		printf("%d %d\n", i, leastgreater(0, n - 1, i));

	printf("Greatest integer lesser than key\n");
	for (int i = 0; i < 10; i++)
		printf("%d %d\n", i, greatestlesser(0, n - 1, i));

	return 0;
}
