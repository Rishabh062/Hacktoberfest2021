m , n , r = input().split()
m , n , r = int(m) , int(n) , int(r)
a , b , c = [] , [] , []
for i in range(m) :
    a.append([int(j) for j in input().split()])
for i in range(n) :
    b.append([int(j) for j in input().split()])
for i in range(m) :
    c.append([0 for j in range(r)])

for i in range(len(a)) :
    for j in range(len(b[0])) :
        for k in range(len(b)) :
            c[i][j] += a[i][k] * b[k][j]
for i in range(m) :
    for j in range(r) :
        print(c[i][j] , end = ' ')
    print()
