""" The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and 
sell the stock so that in between those days your profit is maximum.

Input: 
First line contains number of test cases T. 
First line of each test case contains an integer value N denoting the number of days, 
followed by an array of stock prices of N days. 

Output:
For each testcase, output all the days with profit in a single line. And if there is no profit then print "No Profit".

Constraints:
1 <= T <= 100
2 <= N <= 103
0 <= Ai <= 104

Example
Input:
3
7
100 180 260 310 40 535 695
4
100 50 30 20
10
23 13 25 29 33 19 34 45 65 67

Output:
(0 3) (4 6)
No Profit
(1 4) (5 9)

Explanation:
Testcase 1: We can buy stock on day 0, and sell it on 3rd day, which will give us maximum profit.

Note: Output format is as follows - (buy_day sell_day) (buy_day sell_day)
For each input, output should be in a single line. """

N = int(input())
lst = [int(item) for item in input().split()]
buy = 0
sell = 0
s = 1
for i in range(0,N-1):

    if lst[i]<lst[i+1] and buy==0:
        buy = lst[i]
        print("Buy at", buy)
    
    if lst[i]>lst[i+1] and buy>0:
        sell = lst[i]
        buy = lst[i+1]
        print("Sell at", sell)
        print("Buy at", buy)
        
    if buy>0 and i == N-2:
        sell = lst[N-1]
        print("Sell at",sell)

    if i == N-2 and buy+sell==0:
        print("No Profit")

    




    """ if i == N-2 and buy<lst[N-2]:
        sell = lst[N-1]
        print("Sell at",sell)
    
    if lst[i]<lst[i+1] and s == 1:
        buy = lst[i]
        sell = lst[i+1]
        print("Buy at",buy)
        s = 0
        
    if lst[i]>lst[i+1] and i!=N-1:
        continue
    
    if i==N-1 and lst[i]>lst[i+1]:

        if buy+sell==0 and i==N-1:
            print("No Profit")
            break
        else:

            sell = lst[i] 
            s == 1
            buy = lst[i+1] 
            print("Sell at",sell)
            print('Buy at',buy)
 """



