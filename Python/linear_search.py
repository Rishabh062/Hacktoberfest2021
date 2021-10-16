def linear_Search(list1, n, key):
    # Searching list1 sequentially
    for i in range(0, n):
        if (list1[i] == key):
            return i
    return -1


list1 = []
size = int(input("Enter Size of Array"))
for i in range(0, size):
    list1.append(int(input()))

key = 7

n = len(list1)
res = linear_Search(list1, n, key)
if (res == -1):
    print("Element not found")
else:
    print("Element found at index: ", res)
