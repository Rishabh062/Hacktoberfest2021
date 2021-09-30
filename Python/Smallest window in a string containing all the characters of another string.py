""" Given a string S and text T. Output the smallest window in the string S having all characters of the text T. Both the string S and text T contains lowercase english alphabets.

Input:
First line of the input contains an integer T, denoting the number of test cases. Then T test case follows. Each test contains 2 lines having a string S and next line contains text T.

Output:
Output the smallest window of the string containing all the characters of the text. If such window doesn`t exist or this task can not be done then print -1.

Constraints:
1 <= T <= 100
1 <= |N|, |X| <= 1000

Example:
Input:
2
timetopractice
toc
zoomlazapzo
oza

Output:
toprac
apzo

Explanation:
Testcase 1: "toprac" is the smallest substring in the given string S which contains every characters of T. """




S1 = input()
S2 = input()

S = ''.join(sorted(S1)) 

print("Sorted String:",S)

count = 0
for i in range(0,len(S)):
    
    if i == len(S)-1:
        print(S[i],":",S.count(S[i]),"at",i)

    if S[i] == S[i+1] and i!=len(S)-2:
        continue

    else:
        print(S[i],":",S.count(S[i]))
        
    
