T = int(input())
N = int(input())
lst = [int(item) for item in input().split()]

#K = int(input())
l = 0
for i in range(0,N):
    if l<lst[i]:
        l=lst[i]
        
print("1st Largest:",l)

l2 = 0

for i in range(0,N):
    if((l2<lst[i]) and (lst[i]!=l)):
        l2 = lst[i]
        
print("2nd Largest:",l2)