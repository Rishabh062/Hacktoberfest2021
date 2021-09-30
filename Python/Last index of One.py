""" Given a string S consisting only '0's and '1's,  print the last index of the '1' present in it.

Input:
First line of the input contains the number of test cases T, T lines follow each containing a stream of characters.

Output:
Corresponding to every test case, output the last index of 1. If 1 is not present, print "-1" (without quotes).

Constraints:
1 <= T <= 110
1 <= |S| <= 106

Example:
Input:
2
00001
0
Output:
4
-1

Explanation:
Testcase 1: Last index of  1 in given string is 4.
Testcase 2: Since, 1 is not present, so output is -1. """


T = int(input())
S = input()
N = len(S)
#print(N)
ans = 0
for i in range(0,N):
    if S[i]=="1" and i<=N-1:
        ans=i+1
    

if ans!= 0:
    print(ans)
else:
    print("-1")
    

