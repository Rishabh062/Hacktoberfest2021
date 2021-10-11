import math
import os
import random
import re
import sys


def compareTriplets(a, b):
    aliceScr = 0
    bobScr = 0
    total = [0,0]
    for i in range(len(a)):
        if a[i]>b[i]:
            total[0] += 1
        elif a[i]<b[i]:
            total[1] += 1
        else:
            continue
    return total

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
