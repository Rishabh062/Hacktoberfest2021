def fib(n) :
    global a
    global b
    global s
    if n == 0 :
        return 0
    elif n == 1 :
        return 1
    else :
        s = fib(n-1) + a 
        a = b
        b = s
        return s

a , b = 0 , 1
s = 0
n = int(input())
print(fib(n))
