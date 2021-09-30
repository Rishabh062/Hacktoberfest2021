""" Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.

Input:
The first line of input contains a single integer T denoting the number of test cases. 
Then T test cases follow. Each test case consist of two lines of input. 
The first line of each test case consists of an integer N(size of array) and an integer K separated by a space. 
The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each test case, print the modified array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N, K ≤ 107
1 ≤ A[i] ≤ 1018

Example:
Input
2
5 3
1 2 3 4 5
6 2
10 20 30 40 50 60

Output
3 2 1 5 4
20 10 40 30 60 50

Explanation:
Testcase 1: Reversing groups in size 3, first group consists of elements 1, 2, 3. 
Reversing this group, we have elements in order as 3, 2, 1. """


""" T = int(input())
N1 = int(input())
N2 = int(input()) """
lst1 = [int(item) for item in input().split()]
lst2 = []
K = int(input())
N = len(lst1)
R= N - K


for i in range(K-1,-1,-1):
    lst2.append(lst1[i])

for i in range(N-1,K-1,-1):
    lst2.append(lst1[i])

print(lst2)