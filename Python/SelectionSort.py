def selection_sort(arr):
    # Get the length of the array
    n = len(arr)
    
    # Loop through the array
    for i in range(n):
        # Assume the current index is the minimum
        min_idx = i
        
        # Loop through the unsorted part of the array
        for j in range(i+1, n):
            # If a smaller element is found, update the minimum index
            if arr[j] < arr[min_idx]:
                min_idx = j
        
        # Swap the minimum element with the first element of the unsorted part
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    
    # Return the sorted array
    return arr