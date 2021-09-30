""" Given an array A of N positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position 
such that the sum of elements before it is equal to the sum of elements after it.

Example 1:

Input:
N = 1
A[] = {1}
Output: 1
Explanation: Since its the only 
element hence its the only equilibrium 
point.  

Input:
N = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2).
"""



def Sum_before(A,mid):
    sum1=0
    for j in range(0,mid+1):
        sum1+=A[j]
        

    return sum1

def Sum_After(A,mid,l):
    sum2=0
    
    for k in range(mid,l+1):
        sum2+=A[k]

    return sum2


def equilibriumPoint(A, N):
    
    
    sum = 0
    if (N == 1):
        return(1)

    if N==2:
        return(-1)

    else:
        

        if N%2==0:
            mid = N//2
            if(Sum_before(A, mid-1) == Sum_After(A, mid, N-1)):
                return mid
            else:
                return False 
        else:
            mid = N//2
            #print(mid)

            if(Sum_before(A, mid-1) == Sum_After(A, mid+1, N-1)):
                return mid+1
            else:
                return False


if __name__ == "__main__":

   N = int(input())
   A =  [int(item) for item in input().split()]      
   print(equilibriumPoint(A,N)) 


