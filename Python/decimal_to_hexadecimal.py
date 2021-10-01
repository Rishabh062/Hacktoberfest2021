print("Enter the Decimal Number: ", end="")
dn = int(input())

i = 0
hdn = []

while dn!=0:
    rem = dn % 16
    if rem<10:
        rem = rem+48
    else:
        rem = rem+55
    hdn.insert(i, chr(rem))
    i = i+1
    dn = int(dn / 16)

print("\nEquivalent Hexadecimal Value = ", end="")
i = i-1
while i>=0:
    print(end=hdn[i])
    i = i-1

print()
