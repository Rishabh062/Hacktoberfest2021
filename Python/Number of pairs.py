""" Given two arrays X and Y of positive integers, 
find number of pairs such that xy > yx (raised to power of) 
where x is an element from X and y is an element 
from Y.

Input:
The first line of input contains an integer T, denoting the number of test cases. 
Then T test cases follow. Each test consists of three lines. 
The first line of each test case consists of two space separated M and N 
denoting size of arrays X and Y respectively.
The second line of each test case contains M space separated integers denoting the elements of array X. 
The third line of each test case contains N space separated integers denoting elements of array Y.

Output:
Corresponding to each test case, print in a new line, the number of pairs such that xy > yx.

Constraints:
1 ≤ T ≤ 100
1 ≤ M, N ≤ 105
1 ≤ X[i], Y[i] ≤ 103

Example:
Input
1
3 2
2 1 6
1 5

Output
3

Explanation:
Testcase 1: The pairs which follow xy > yx are as such: 21 > 12,  25 > 52 and 61 > 16 """


