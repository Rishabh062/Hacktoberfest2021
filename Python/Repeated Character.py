""" Given a string - "str", find the repeated character present first in the string.

Example : 
Input  :  geeksforgeeks
Output :  g
(mind that it will be g, not e.)

Input : 
The first line of input contains an integer T denoting the Test cases. Then T test cases follow. 
Second line contains the string - "str"

Output : 
repeated character present first in the string, if present
otherwise print "-1"


Input : 
3
hello
fg
geeksforgeeks

Output : 
l
-1
g """


def found(i,S,C,N):
    for j in range(i+1,N):
        if S[j] == C:
            return S[j]


if __name__ == "__main__":
    
    #T = input()

    S = input()
    N = len(S)
    count = 0
    j = 0

    for i in range(0,N):
        if S[i] == found(i,S,S[i],N):
            print(S[i])
            count +=1
            break

if count == 0:
    print("-1")