class Solution:
    def countBinarySubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        chunks = []
        consective = 1
        for i in range(1, len(s)):
            if s[i] == s[i-1]:
                consective += 1
            else:
                chunks.append(consective)
                consective = 1
        chunks.append(consective)
        pairs = zip(chunks[1:], chunks[:-1])
        return sum([min(i) for i in pairs])