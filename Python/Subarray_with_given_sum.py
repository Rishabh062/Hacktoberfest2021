# -*- coding: utf-8 -*-

# The first line of input contains an integer T denoting the number of test cases. 
# Then T test cases follow. Each test case consists of two lines. 
# The first line of each test case is N and S, where N is the size of array 
# and S is the sum. The second line of each test case contains N space 
# separated integers denoting the array elements.

# Output:
# For each testcase, in a new line, print the starting and 
# ending positions(1 indexing) of first such occuring subarray 
# from the left if sum equals to subarray, else print -1.

# Constraints:
# 1 <= T <= 100
# 1 <= N <= 107
# 1 <= Ai <= 1010

# Example:
# Input:
# 2
# 5 12
# 1 2 3 7 5
# 10 15
# 1 2 3 4 5 6 7 8 9 10
# Output:
# 2 4
# 1 5

# Explanation :
# Testcase1: sum of elements from 2nd position to 4th position is 12
# Testcase2: sum of elements from 1st position to 5th position is 15


def dream(i,l,A):
    sum = 0
    for k in range(i,N-1):
        if(sum<=A):
            sum += l[k]
    return sum


if  __name__ == "__main__":

    #T=int(input())      Test Cases are turned off
    l=[]                 #making an empty List
    

    N, A = input().split()
    N = int(N)
    A = int(A)

    for j in range(0,N):
        l.append(int(input()))
    
    for i in range(0,N-1):

        if(dream(i,l,A)==A):
            print(l[i])
        
        












