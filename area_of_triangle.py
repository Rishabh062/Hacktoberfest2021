a=int(input("Enter the first side of a triangle\n"))
b=int(input("Enter the second side of a triangle\n"))
c=int(input("Enter the third side of a triangle\n"))

s=(a+b+c)/2
area=(s*(s-a)*(s-b)*(s-c))**0.5
print("the area of triangle is :",area)
