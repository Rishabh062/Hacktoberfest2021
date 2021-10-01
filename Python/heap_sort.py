""" CODE: WAP to sort an array of given numbers using Heap sort method.
"""

def heapify(arr, n, root):

    largest = root  # Initialize largest as root
    left = 2 * root + 1  # left = 2*i + 1
    right = 2 * root + 2  # right = 2*i + 2

    # See if left child of root exists and is greater than root
    if n > left and arr[largest] < arr[left]:
        largest = left

    # See if right child of root exists and is greater than root
    if n > right and arr[largest] < arr[right]:
        largest = right

    # Heapify again in required
    if largest != root:
        arr[root], arr[largest] = arr[largest], arr[root]
        heapify(arr, n, largest)  # Heapify the root.


def heap_sort(arr):
    n = len(arr)
    # Build a maxHeap.
    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)

    # One by one extract elements
    for i in range(n - 1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]
        heapify(arr, i, 0)


# __main__
items = [5, 4, 3, 2, 1, 99, 78]
heap_sort(items)
print(*items)
