'''
Given an array, find the Next greater element for every element.

Input :
A : [4, 5, 2, 25]
Output :
[5, 25, 25, -1]

'''
def nextGreaterElement(A):
        ans=[-1]*len(A)
        stack=[]
        top=-1
        n=len(A)
        for i in range(n):
            while(top>-1 and A[i]>A[stack[top]]):
                ans[stack[top]]=A[i]
                stack.pop()
                top-=1
            stack.append(i)
            top+=1
        while(top>-1):
            ans[stack[top]]=-1
            stack.pop()
            top-=1
        return ans

A=list(map(int,input().split()))
print(nextGreaterElement(A))