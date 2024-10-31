# merge_sort.py
# Problem Statement: Implement the Merge Sort algorithm in Python.
# Description: Merge Sort is a Divide and Conquer algorithm that divides the input array into two halves, 
# recursively sorts them, and then merges the two sorted halves.
# Complexity: 
# - Time Complexity: O(n log n) for both average and worst-case scenarios.
# - Space Complexity: O(n) due to the auxiliary space needed for merging.

def merge_sort(arr):
    # Base case: if the array has only one element, it's already sorted
    if len(arr) > 1:
        # Finding the mid-point of the array
        mid = len(arr) // 2

        # Dividing the array elements into two halves
        left_half = arr[:mid]
        right_half = arr[mid:]

        # Recursively sort the two halves
        merge_sort(left_half)
        merge_sort(right_half)

        i = j = k = 0

        # Merging the sorted halves
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        # Checking for remaining elements
        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

# Sample usage
if __name__ == "__main__":
    # Sample array to test the merge_sort function
    array = [12, 11, 13, 5, 6, 7]
    print("Original array:", array)
    merge_sort(array)
    print("Sorted array:", array)
