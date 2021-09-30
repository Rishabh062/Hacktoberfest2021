""" Given a sorted array of positive integers. 
Your task is to rearrange  the array elements alternatively i.e first element should be max value, 
second should be min value, third should be second max, fourth should be second min and so on...

Note: O(1) extra space is allowed. Also, try to modify the input array as required.

Input:
First line of input conatins number of test cases T. 
First line of test case contain an integer denoting the array size N and 
second line of test case contain N space separated integers denoting the array elements.

Output:
Output the modified array with alternated elements.

Constraints:
1 <=T<= 100
1 <=N<= 107
1 <=arr[i]<= 107

Example:
Input:
2
6
1 2 3 4 5 6
11 
10 20 30 40 50 60 70 80 90 100 110

Output:
6 1 5 2 4 3
110 10 100 20 90 30 80 40 70 50 60

Explanation:
Testcase 1: Max element = 6, min = 1, second max = 5, second min = 2, and so on... Modified array is : 6 1 5 2 4 3. """



def max(lst,i):
    #for i in range(N-1,0,-1):
    return(i)

def min(lst,i):
    
    return lst[i]

if __name__ == "__main__":
    

    N = int(input())
    lst = [int(item) for item in input().split()]
    new_lst = []
    j = N
    k = 0

    if N==1:
        print("1")

    elif N%2==0:
        for i in range(0,N//2):

            new_lst.append(max(lst,j))
            new_lst.append(min(lst,k))
            j = j-1
            k = k+1

        print(new_lst)

    else:
        
        for i in range(0,N//2):
            new_lst.append(max(lst,j))
            new_lst.append(min(lst,k))
            j = j-1
            k = k+1
        new_lst.insert(N//2,lst[N//2])

        print(new_lst)

