from xmlrpc.client import ServerProxy
client = ServerProxy('http://localhost:3000')


# Perimeter of rectangle function
def perimeter_of_rect(l, b):
    return 2 * (l + b)


if __name__ == '__main__':
    print("Area and Perimeter of Rectangle")
    length = int(input("Enter length of rectangle:"))  # Taking input from user
    breadth = int(input("Enter breadth of rectangle:"))  # Taking input from user
    perimeter = perimeter_of_rect(length, breadth)      # Calling function residing at client side
    area = client.area_of_rect(length, breadth)        # Calling function residing at server side
    print(f"The perimeter of rectangle of length {length} and breadth {breadth} is  {perimeter}.")
    print(f"The area of rectangle of length {length} and breadth {breadth} is {area}.")
