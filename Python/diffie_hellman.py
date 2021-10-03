# Diffie–Hellman key exchange[nb 1] is a method of securely exchanging cryptographic keys over a public channel and
# was one of the first public-key protocols as conceived by Ralph Merkle and named after Whitfield Diffie and Martin Hellman.

# You may find more information about these parameters via https://en.wikipedia.org/wiki/Diffie%E2%80%93Hellman_key_exchange
p = int(input('Enter p parameter: ')) # 13
g = int(input('Enter g parameter: ')) # 11
x = int(input('Enter x parameter: ')) # 9
y = int(input('Enter y parameter: ')) # 6

# Calculation of the own secret parameter based on received parameter from the second user.
x_a = pow(g, x) % p
print("xa:", x_a)

# Calculation of the own secret parameter based on received parameter from the first user.
y_b = pow(g, y) % p
print("yb:", y_b)


# Calculation of the secrets for each user (they should be the same)
k_a = pow(y_b, x) % p
print("ka:", k_a)
k_b = pow(x_a, y) % p
print("kb:", k_b)