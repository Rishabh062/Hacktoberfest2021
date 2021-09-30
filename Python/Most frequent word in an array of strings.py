""" Given an array containing N words consisting of lowercase characters. Your task is to find the most frequent word in the array. If multiple words have same frequency, then print the word whose first occurence occurs last in the array as compared to the other strings with same frequency.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. Each test case contains 2 lines, the size of array N and N words separated by spaces.

Output:
For each testcase, output the most frequent word.

Expected Time Complexity: O(N * WORD_LEN).
Expected Auxiliary Space: O(N * WORD_LEN).

Constraints:
1 <= T <= 100
1 <= N <= 1000

Example:
Input:
3
3
geeks for geeks
2
hello world
3
world wide fund

Output:
geeks
world
fund

Explanation:
Testcase 1: "geeks" comes 2 times.
Testcase 2: "hello" and "world" both have 1 frequency. We print world as it comes last in the input array.
  """

S = input()
N = len(S)

st = ""

max = 0
i=0
while(S[i]!=" " and i<=N-1):
    st += S[i]
    i += 1
    print(i,st)
    if S[i]==" ":
        if S.count(st)>1:
            print("Found Word:", st)
            if i+1<N-1 and i!=N-1:
                i = i+1
                st = ""
            if i+1 == N-1:
                break
            
        else:
            print("Not Found Word:", st)
            st = ""
            if i+1<N-1 and i!=N-1:
                i = i+1
                continue
            if i+1 == N-1:
                break
        

"""  Logic left  """



