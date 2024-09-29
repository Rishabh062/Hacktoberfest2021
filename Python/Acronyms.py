class Solution:
   def solve(self, s):
      tokens=s.split()
      string=""
      for word in tokens:
         if word != "and":
            string += str(word[0])
      return string.upper()
ob = Solution()
print(ob.solve("Indian Space Research Organisation"))
