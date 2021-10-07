# Problem Statement: Implementation of Quicksort algorithm QuickSort is a Divide and Conquer algorithm. 
#It picks an element as pivot and partitions the given array around the picked pivot. 

def partition(start, end, array):
      
    # Initializing pivot's index to start
    pivot_index = start 
    pivot = array[pivot_index]
      
    # This loop does we swap the pivot with element on end pointer
    while start < end:
          
        # Increment the start pointer till it finds an element greater than  pivot 
        while start < len(array) and array[start] <= pivot:
            start += 1
              
        # Decrement the end pointer till it finds an element less than pivot
        while array[end] > pivot:
            end -= 1
          
        # If start and end have not crossed each other, swap the numbers on start and end
        if(start < end):
            array[start], array[end] = array[end], array[start]
      
    # Swap pivot element with element on end pointer.
    array[end], array[pivot_index] = array[pivot_index], array[end]
     
    # Returning end pointer to divide the array into 2
    return end
      
# The main function that implements QuickSort 
def quick_sort(start, end, array):
      
    if (start < end):
          
        # p is partitioning index, array[p] is at right place
        p = partition(start, end, array)
          
        # Sort elements before partition and after partition
        quick_sort(start, p - 1, array)
        quick_sort(p + 1, end, array)


array = [ 10, 7, 8, 9, 1, 5 ]
quick_sort(0, len(array) - 1, array)
  
print(f'Sorted array: {array}')


# Time Complexity: 
# Best case- O(NlogN)
# Average case- O(NlogN)
# Worst case- O(N^2)

                   