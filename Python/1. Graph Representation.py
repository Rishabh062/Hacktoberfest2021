# You have been given an undirected graph consisting of N nodes and M edges. This graph can consist of self-loops as well as multiple edges. In addition , you have also been given Q queries. For each query , you shall be given 2 integers A and B. You just need to find if there exists an edge between node A and node B. If yes, print "YES" (without quotes) else , print "NO"(without quotes).

# Input Format:

# The first line consist of 2 integers N and M denoting the number of nodes and edges respectively. Each of the next M lines consist of 2 integers A and B denoting an undirected edge between node A and B. The next line contains a single integer Q denoting the number of queries. The next Line contains 2 integers A and B denoting the details of the query.



from collections import defaultdict
n,m = map(int,input().split())
graph = defaultdict(lambda:[])

for i in range(m):
    x,y=map(int,input().split())
    graph[x].append(y)
    graph[y].append(x)

q = int(input())
for i in range(q):
    x,y=map(int,input().split())
    if y in graph[x]:
        print("YES")
    else:
        print("NO")


