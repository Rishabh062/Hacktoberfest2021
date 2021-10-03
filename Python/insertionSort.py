def insertionSort(list):
    # all the values after the first
    index_length = range(1, len(list))
    # to do an operation on all these values
    # for all the value is the index_length value,
    for i in index_length:
    # we want to sort those values
        sort = list[i]
        # while the item to the left is greater than the item
        # to the right
        # notice that we also have to write i > 0 bc python allows
        # for negative indexing
        while list[i-1] > sort and i > 0:
            # swap
            list[i], list[i-1] = list[i-1], list[i]
            # to continue doing comparisons down the list,
            # look at the next item
            i = i - 1
 
    return list
 
print(insertionSort([7, 3, 4, 1, 9]))

'''
# Mark the first element, 10, as sorted
[10, 3, 2, 6]
# Look at next element, 3, 3 < 10
[10, 3, 2, 6]
# Extract 3 and move it before 10, mark first element, 3 as sorted
[3, 10, 2, 6]
# Look at the next unsorted element, 2, 2 < 10, 2 < 3
[3, 10, 2, 6]
# Extract 2 and move it before 3, mark first element, 2, as sorted
[2, 3, 10, 6]
# Look at the next unsorted element, 6, 6 < 10, 6 > 3
[2, 3, 10, 6]
# Extract 6 and move it before 10
[2, 3, 6, 10]
'''
