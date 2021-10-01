# The RSA algorithm is an asymmetric cryptography algorithm; this means that it uses a public key and a private key (i.e two different, mathematically linked keys).
# As their names suggest, a public key is shared publicly, while a private key is secret and must not be shared with anyone.

# You may find more information about these parameters via https://www.educative.io/edpresso/what-is-the-rsa-algorithm
p = int(input('Enter p parameter: ')) # 37
q = int(input('Enter q parameter: ')) # 47
e = int(input('Enter e parameter: ')) # 19
n = p * q

# implementation of the totient function
def eiler(p, q):
  return (p - 1) * (q - 1)

# function that preform caluclation of the LCD
def nsd(a, b):
  while a != 0 and b != 0:
    if a > b:
      a = a % b
    else:
      b = b % a
  return a + b

# Caluclation of the φ(n). This value is needed to find co-prime.
n_e = eiler(p, q)
print("n:", n)
print("φ(n):", n_e)

# Function that perform calculation of the co-prime
def ext_evcl(n_e, e):
  matrix = []
  matrix.append([n_e, 0, 1, 0])
  matrix.append([e, 0, 0, 1])
  last_elem = 1
  while matrix[last_elem][0] != 1 or matrix[last_elem][3] < 0:
    if matrix[last_elem][0] == 1:
      matrix[last_elem][0], matrix[last_elem][1] = matrix[last_elem][1], matrix[last_elem][0]
    r = matrix[last_elem - 1][0] % matrix[last_elem][0]
    q = matrix[last_elem - 1][0] // matrix[last_elem][0]
    u = matrix[last_elem - 1][2] - q * matrix[last_elem][2]
    v = matrix[last_elem - 1][3] - q * matrix[last_elem][3]
    matrix.append([r, q, u, v])
    last_elem += 1
  return matrix[last_elem][3]

def crypt(m, n, e):
  return pow(m, e) % n

# Integer value to be encrypt. In case if string should be encrypted, it is possible to convert string to array of chars and
# convert them to integers according to the ASCII.
m = 7

# Encryption
encrypted_value = crypt(m, n, e)
print("Encrypted value:", encrypted_value)

# Decryption
d = ext_evcl(n_e, e)
print("d:", d)
decrypted_value = crypt(encrypted_value, n, d)
print("Decrypted value:", decrypted_value)