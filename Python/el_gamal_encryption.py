p = int(input('Enter p paremeter: ')) #13
g = int(input('Enter g paremeter: ')) #7
x = int(input('Enter x paremeter: ')) #10
k = int(input('Enter k paremeter: ')) #11
m = int(input('Enter m paremeter: ')) #7
y = pow(g, x) % p
print("y:", y)
a = pow(g, k) % p
b = pow(y, k) * m % p
print("Ciphertext: (" + str(a) + ", " + str(b) + ")")
decrypted_m = b * pow(a, p - 1 - x) % p
print("Decrypted value:", decrypted_m)