def fibonacci(n):
    if n in [0, 1]:
        return n

    fibonacci_list = [0, 1]

    for i in range(2, n):
        a = fibonacci_list[-1]
        b = fibonacci_list[-2]

        result = a + b
        fibonacci_list.append(result)
        fibonacci_list.pop(0)

    return sum(fibonacci_list)


assert fibonacci(0) == 0
assert fibonacci(1) == 1
assert fibonacci(2) == 1
assert fibonacci(3) == 2
assert fibonacci(4) == 3
assert fibonacci(5) == 5
assert fibonacci(6) == 8
assert fibonacci(7) == 13
assert fibonacci(8) == 21
