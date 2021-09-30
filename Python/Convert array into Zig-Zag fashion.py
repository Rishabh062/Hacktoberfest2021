""" Given an array A (distinct elements) of size N. Rearrange the elements of array in zig-zag fashion. 
The converted array should be in form a < b > c < d > e < f. 
The relative order of elements is same in the output i.e you have to iterate on the original array only.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. 
Each testcase contains two lines of input. 
The first line contains a single integer N denoting the size of array.
The second line contains N space-separated integers denoting the elements of the array.

Output:
For each testcase, print the array in Zig-Zag fashion.

Constraints:
1 <= T <= 100
1 <= N <= 100
0 <= Ai <= 10000

Example:
Input:
2
7
4 3 7 8 6 2 1
4
1 4 3 2
Output:
3 7 4 8 2 6 1
1 4 2 3 """


N = int(input())
lst = [ int(item) for item in input().split() ]
switch = 0

for i in range(0,N-1):
    if switch == 0 and lst[i]>lst[i+1]:
        switch = 1
        swap = 0

        #print("swapping", lst[i],lst[i+1])
        swap = lst[i]
        lst[i] = lst[i+1]
        lst[i+1] = swap

        continue


    if switch == 1 and lst[i]<lst[i+1]:
        switch = 0
        swap = 0

        #print("swapping", lst[i],lst[i+1])
        swap = lst[i]
        lst[i] = lst[i+1]
        lst[i+1] = swap
        continue

    else:
        if switch == 1:
            switch = 0
            #print("Just switching")
        else:
            switch = 1
            #print("Just switching")


print(lst)