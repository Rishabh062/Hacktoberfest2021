""" Given two strings a and b consisting of lowercase characters. 
The task is to check whether two given strings are anagram of each other or not. 
An anagram of a string is another string that contains same characters, 
only the order of characters can be different. For example, “act” and “tac” are anagram of each other.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case consist of two strings in 'lowercase' only, in a single line.

Output:
Print "YES" without quotes if the two strings are anagram else print "NO".

Constraints:
1 ≤ T ≤ 300
1 ≤ |s| ≤ 106

Example:
Input:
2
geeksforgeeks forgeeksgeeks
allergy allergic

Output:
YES
NO

Explanation:
Testcase 1: Both the string have same characters with same frequency. So, both are anagrams.
Testcase 2: Characters in both the strings are not same, so they are not anagrams. """


# T = int(input())

def Anogram_check(string1, string2):
# Strings are sorted and verified
    if(sorted(string1) == sorted(string2)):
        print("Both strings form a Anogram.")
    else:
        print("Both strings do not form as a Anogram.")
# driver code

string1 ="EARTH"
string2 ="HEART"
print( "String value1 : ", string1 )
print( "String value2 : ", string2 )
Anogram_check(string1, string2)

