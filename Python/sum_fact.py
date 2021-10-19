'''
Given a number n, the task is to find the sum of all the factors.
Examples : 
 

Input : n = 30
Output : 72
Dividers sum 1 + 2 + 3 + 5 + 6 + 
             10 + 15 + 30 = 72 

Input :  n = 15
Output : 24
Dividers sum 1 + 3 + 5 + 15 = 24
'''
import math 
 
# Function to calculate sum
# of all divisors of given
#  natural number
def divSum(n) :
    if(n == 1):
       return 1
 
    # Final result of summation
    # of divisors
    result = 0
   
    # find all divisors which
    # divides 'num'
    for i in range(2,(int)(math.sqrt(n))+1) :
 
        # if 'i' is divisor of 'n'
        if (n % i == 0) :
 
            # if both divisors are same
            # then add it only once
            # else add both
            if (i == (n/i)) :
                result = result + i
            else :
                result = result + (i + n//i)
         
         
    # Add 1 and n to result as above
    # loop considers proper divisors
    # greater than 1.
    return (result + n + 1)
   
# Driver program to run the case
n = 30
print(divSum(n))
# Time Complexity: O(sqrt(n))
