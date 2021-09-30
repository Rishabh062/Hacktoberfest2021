""" Given a matrix mat[][] of size M*N. Traverse and print the matrix in spiral form.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. 

Then T test cases follow. Each testcase has 2 lines. 
First line contains M and N respectively separated by a space. 
Second line contains M*N values separated by spaces.

Output:
Elements when travelled in Spiral form, will be displayed in a single line.

Constraints:
1 <= T <= 100
2 <= M,N <= 10
0 <= Ai <= 100

Example:
Input:
2
4 4
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
3 4
1 2 3 4 5 6 7 8 9 10 11 12

Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
1 2 3 4 8 12 11 10 9 5 6 7 """




# given matrix in spiral form 
def spiralPrint(m, n, a) : 
	k = 0; l = 0

	''' k - starting row index 
		m - ending row index 
		l - starting column index 
		n - ending column index 
		i - iterator '''
	

	while (k < m and l < n) : 
		
		# Print the first row from 
		# the remaining rows 
		for i in range(l, n) : 
			print(a[k][i], end = " ") 
			
		k += 1

		# Print the last column from 
		# the remaining columns 
		for i in range(k, m) : 
			print(a[i][n - 1], end = " ") 
			
		n -= 1

		# Print the last row from 
		# the remaining rows 
		if ( k < m) : 
			
			for i in range(n - 1, (l - 1), -1) : 
				print(a[m - 1][i], end = " ") 
			
			m -= 1
		
		# Print the first column from 
		# the remaining columns 
		if (l < n) : 
			for i in range(m - 1, k - 1, -1) : 
				print(a[i][l], end = " ") 
			
			l += 1

# Driver Code 
a = [ [1, 2, 3, 4], 
	[5,6,7,8], 
	[9,10,11,12],
    [13,14,15,16] ] 
		
R = 4
C = 4
spiralPrint(R, C, a) 

# This code is contributed by Nikita Tiwari. 
