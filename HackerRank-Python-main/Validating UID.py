n=int(input())
s1=[]

for x in range(n):
    s1.append(input())

for x in s1:
    err=0
    nc=0
    ac=0
    if x.isalnum() and len(x)==10:
        for y in x:
            if x.count(y)>1:
                err+=1
                break
            else:
                if y.isupper():
                    ac+=1
                elif y.isdigit():
                    nc+=1
        if nc>=3 and ac>=2 and err==0:
            print("Valid")
        else:
            print("Invalid")
    else:
        print("Invalid")
