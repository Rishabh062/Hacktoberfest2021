a=int(input("enter your no.:"))
b=a
rem=0
arm=0
while(b>0):
    rem=b%10
    arm=arm+(rem**3)
    b=b//10
if a==arm: 
    print(a,"it is a armstrong no.")
else:
    print(a,"it is not a armstrong no.")
