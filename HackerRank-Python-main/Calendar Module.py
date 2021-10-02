# Enter your code here. Read input from STDIN. Print output to STDOUT
import calendar
m,d,y=map(int,input().split())
print(list(calendar.day_name)[calendar.weekday(y, m, d)].upper())
