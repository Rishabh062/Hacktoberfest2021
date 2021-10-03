# Enter your code here. Read input from STDIN. Print output to STDOUT
ne=int(input())
re=set(map(int,input().split()))
nb=int(input())
rb=set(map(int,input().split()))
print(len(re|rb))
