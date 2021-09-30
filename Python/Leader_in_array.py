# -*- coding: utf-8 -*-

#7
#63 70 80 33 33 47 20
#
#Its Correct output is:
#80 47 20
#
#And Your Code's output is:
#70 80 47 20

N=int(input()) 
l=[]
A=[]
for i in range(0,N):
  l.append((input()))

for i in range(0,N-1):
   
  if(l[i]<l[i+1]):
    A.append(l[i+1])

A.append(l[N-1]) 
print(A)


