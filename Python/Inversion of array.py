""" Given an array of positive integers. The task is to find inversion count of array.

Inversion Count : For an array, inversion count indicates 
how far (or close) the array is from being sorted. 
If array is already sorted then inversion count is 0. 
If array is sorted in reverse order that inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. The second line of each test case contains N elements.

Output:
Print the inversion count of array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
1 ≤ C ≤ 1018

Example:
Input:
1
5
2 4 1 3 5

Output:
3

Explanation:
Testcase 1: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3). """


N = int(input())
lst = [int(item) for item in input().split()]

ic = 0

for i in range (0,N-1):
    for j in range (1,N-1):
        if lst[i]>lst[j] and i < j:
            print("Swapping",lst[i],"and",lst[j])
            ic += 1
            swap = lst[i]
            lst[i] = lst[j]
            lst[j] = swap
        
print(ic)