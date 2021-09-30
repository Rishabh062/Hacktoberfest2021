""" Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two lines of input. The first line denotes the size of the array N. The second lines contains the elements of the array A separated by spaces.

Output: 
For each testcase, print the sorted array.

Constraints:
1 <= T <= 500
1 <= N <= 106
0 <= Ai <= 2

Example:
Input :
2
5
0 2 1 2 0
3
0 1 0

Output:
0 0 1 2 2
0 0 1

Explanation:
Testcase 1: After segragating the 0s, 1s and 2s, we have 0 0 1 2 2 which shown in the output. """

T = int(input())
for i in range(0,T):
    N = int(input())
    c1 = 0
    c2 = 0
    c3 = 0

    lst = [int(item) for item in input().split()  ]
    new_lst = []
    for i in range(0,N):
        if lst[i]==0:
            c1 += 1
        elif lst[i] == 1:
            c2 += 1
        else:
            c3 +=1



    """ print("0:",c1,",", "1:",c2, ",", "2:",c3) """


    for i in range(0,c1):
        new_lst.append(0)
    

     

    for i in range(0,c2):
        new_lst.append(1)
        

    for i in range(c3):
        new_lst.append(2)
        
    
    print("Final : " ,new_lst)


