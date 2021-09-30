""" Given a list of non negative integers, arrange them in such a manner that they form the largest number
possible.The result is going to be very large, hence return the result in the form of a string.

Input:
The first line of input consists number of the test cases. The description of T test cases is as follows:
The first line of each test case contains the size of the array, 
and the second line has the elements of the array.

Output:
In each separate line print the largest number formed by arranging the elements of the array in the form 
of a string.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 102
0 ≤ A[i] ≤ 103

Example:
Input:
2
5
3 30 34 5 9
4
54 546 548 60

Output:
9534330
6054854654 """


""" T = int(input())
N = int(input())

lst = [int(item) for item in input().split()]
max = 0
for i in range(0,N):
    if lst[i]>10:
        n = lst[i]%10
        if max < n:
            max = n
    else:
        if max < lst[i]:
            max = lst[i]
        
print(max*pow(10,N)+10) """

# Python3 implementation this is to use itertools. 
# permutations as coded below: 

from itertools import permutations 
def largest(l): 
	lst = [] 
	for i in permutations(l, len(l)): 
		# provides all permutations of the list values, 
		# store them in list to find max 
		lst.append("".join(map(str,i))) 
	return max(lst) 

print(largest([54, 546, 548, 60])) 

# This code is contributed by Raman Monga 


