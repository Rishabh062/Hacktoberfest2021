""" Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
For Example:
ab: Number of insertions required is 1. bab or aba
aa: Number of insertions required is 0. aa
abcd: Number of insertions required is 3. dcbabcd

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is S.

Output:

Print the minimum number of characters.

Constraints:

1 ≤ T ≤ 50
1 ≤ S ≤ 40

Example:

Input:
3
abcd
aba
geeks

Output:
3
0
3 """

# T = input()

S = input()
N = len(S)

c = 0
for i in range (0,N):
    if S.count(S[i]) == 1:
        c += 1
        

    
if c == N:
    print(N-1)
         