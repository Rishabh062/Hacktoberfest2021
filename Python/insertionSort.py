# Insertion sort

def insertionSort(array):

    for step in range(1, len(array)):
        key = array[step]
        j = step - 1
             
        while j >= 0 and key < array[j]:
            array[j + 1] = array[j]
            j = j - 1
        
        array[j + 1] = key

data = [9, 5, 1, 4, 3]
insertionSort(data)
print('Sorted Array:')
print(data)
