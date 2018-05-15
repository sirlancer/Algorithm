# simple proof:

# if S is composed of k substrings s, then S1 = S + S should contain 2k substrings. Destroying the first and the last character leads to at least (2k - 2) substrings left.

# since k >= 2,
# 2k - 2 >= k
# which means that S1[1:-1] should still contain S

class Solution:
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s1 = s+s
        s1 = s1[1:-1]
        return s1.find(s) != -1