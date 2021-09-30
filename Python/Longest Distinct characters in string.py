""" Given a string S, find length of the longest substring with all distinct characters.  
For example, for input "abca", the output is 3 as "abc" is the longest substring with all distinct 
characters.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is String str.

Output:
Print length of smallest substring with maximum number of distinct characters.
Note: The output substring should have all distinct characters.

Constraints:
1 ≤ T ≤ 100
1 ≤ size of str ≤ 10000

Example:
Input:
2
abababcdefababcdab
geeksforgeeks

Output:
6
7 """

def Look_Back(C,word):

    for i in range(0,len(word)):
        if C == word[i]:
            return True
        
    return False

if __name__ == "__main__":

    # T = int(input())
    word = ""
    lst = []
    S = input()
    for i in range(0,len(S)):
        if Look_Back(S[i],word) == False:
            word += S[i]
            
        else:
            lst.append(word)
            word = ""
            continue
            
     

#print(lst)
print(max(lst))