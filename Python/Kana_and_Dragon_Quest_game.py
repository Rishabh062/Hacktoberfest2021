for i in range(int(input())):
    x, n, m = map(int, input().split())

    while x > 0 and (x//2)+10 < x and n:
        x = (x//2)+10
        n -= 1

    if x <= m*10:
        print("YES")
    else:
        print("NO")
