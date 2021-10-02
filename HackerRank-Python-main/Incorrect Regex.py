# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
for t in range(int(input())):
    try:
        print(bool(re.compile(input())))
    except:
        print('False')
