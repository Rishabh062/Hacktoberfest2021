# In cryptography, the ElGamal encryption system is an asymmetric key encryption algorithm for public-key cryptography
# which is based on the Diffie–Hellman key exchange. It was described by Taher Elgamal in 1985.
# ElGamal encryption is used in the free GNU Privacy Guard software, recent versions of PGP, and other cryptosystems.
# The Digital Signature Algorithm (DSA) is a variant of the ElGamal signature scheme, which should not be confused with ElGamal encryption.

# to undestand described parameters, please, refer to https://en.wikipedia.org/wiki/ElGamal_encryption
p = int(input('Enter p paremeter: ')) #13
g = int(input('Enter g paremeter: ')) #7
x = int(input('Enter x paremeter: ')) #10
k = int(input('Enter k paremeter: ')) #11
m = int(input('Enter m paremeter: ')) #7

# Caluclation  of the public key
h = pow(g, x) % p
print("h:", h)

# Caluclation  of the ciphertext
c1 = pow(g, k) % p
c2 = pow(h, k) * m % p
print("Ciphertext: (" + str(c1) + ", " + str(c2) + ")")

# Description of the ciphertext
decrypted_m = c2 * pow(c1, p - 1 - x) % p
print("Decrypted value:", decrypted_m)