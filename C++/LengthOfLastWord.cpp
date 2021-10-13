/*

Problem Statement: Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.
                   A word is a maximal substring consisting of non-space characters only.

Time Complexity: O(n)

Space Complexity: O(1)

*/
#include <iostream>
#include <string>



int lengthOfLastWord(std::string s) {
    int count = 0;
    int n = s.size();
    int i = 0;

    while (i < n) {
        if (s[i] != ' ') {
            count++;
            i++;
        }
        else {
            while (i < n && s[i] == ' ') {
                i++;
            }
            if (i == n) {
                return count;
            }
            else {
                count = 0;
            }
        }
    }
    return count;
}


//Driver Code
int main()
{
    std::string userInputString;
    std::cout << "Please enter a sentence: " << std::endl;
    std::getline(std::cin, userInputString);
    std::cout << "The length of the last word in the sentence is " << lengthOfLastWord(userInputString) << std::endl;
}