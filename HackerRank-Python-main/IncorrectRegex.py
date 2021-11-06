import re
T = int(input())
for _ in range(T):
    try:
        re.compile(input())
        print(True)
    except Exception:
        print(False)
