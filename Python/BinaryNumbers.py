from itertools import groupby
n=262141
rem=""
while(n!=0):
    rem+=str(n%2)
    n=n//2
binary_num=int(rem[:: -1])
print(binary_num)
groups = groupby(str(binary_num))
result = [(label, sum(1 for _ in group)) for label, group in groups]
print(result)
size1=len(result)-1
max=0
for i in range(len(result)):
    if(result[i][0]=='1'):
        if(result[i][1]>result[size1][1] or result[i][1]==result[size1][1]):
            max=result[i][1]
    size1-=1
print(max)
"""
#!/bin/python3

import math
import os
import random
import re
import sys
from itertools import groupby


if __name__ == '__main__':
    n = int(input().strip())
    rem=""
    while(n!=0):
        rem+=str(n%2)
        n=n//2
    binary_num=int(rem[:: -1])
    groups = groupby(str(binary_num))
    result = [(label, sum(1 for _ in group)) for label, group in groups]
    print(result[0][1])
"""

"""
size1=len(result)-1
size2=len(result[0])-1
max=0
for i in range(len(result)):
    size1-=1
    for j in range(len(result[i])):
        if(int(result[i][j])>int(result[size1][size2]) or int(result[i][j])==int(result[size1][size2])):
            max=int(result[i][j])
        else:
            continue
print(max)
"""