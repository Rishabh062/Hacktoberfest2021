""" Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array 
and the second line contains N space separated elements.

Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".

Constraints:
1 <= T <= 100
3 <= N <= 105
1 <= A[i] <= 106

Example:
Input:
2
4
1 5 3 2
3
3 2 7
Output:
2
-1

Explanation:
Testcase 1: There are 2 triplets: 1 + 2 = 3 and 3 +2 = 5 """




def search(ele):
    for i in range(0,N-1):
        if l[i]==ele:
            return True
    return False


if __name__ == "__main__":
    

    N=int(input())
    l=[]
    count = 0
    k=0
    for i in range (0,N):
        l.append(int(input()))
    


    for i in range(0,N-1):
        for j in range(1,N):
            if ( search( l[i] + l[j] ) )== True :
                count+=1
    if(count!=0):
        print(count)
    else:
        print(-1)
 
    
    