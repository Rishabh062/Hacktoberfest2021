# Problem Statement:
# Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

# Time/Space Complexity:
#Time complexity: O(2n)
#Space complexity: O(n), as we never have more than n * 2 parentheses in the valid_answers array.
#Comments: An Overview
#The Generate Parenthesis problem involves generating all valid combinations of parentheses for a given number of pairs of parenthesis.
#This problem can be solved using both recursive and iterative approaches and is a great introduction to backtracking style recursion.

class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        current_string = []
        valid_answers = []
        
        def recurse(forward_parens_needed: int, backward_parens_needed: int) -> None:
            nonlocal valid_answers
            nonlocal current_string
            
            if forward_parens_needed == 0 and backward_parens_needed == 0:
                valid_answers.append(''.join(current_string))
            
            if forward_parens_needed > 0:
                current_string.append('(')
                recurse(forward_parens_needed - 1, backward_parens_needed)
            
            if backward_parens_needed > 0 and forward_parens_needed < backward_parens_needed:
                current_string.append(')')
                recurse(forward_parens_needed, backward_parens_needed - 1)
                
            if len(current_string) > 0:
                current_string.pop()
            
        recurse(n, n)
        return valid_answers
