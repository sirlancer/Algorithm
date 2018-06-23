# -*- coding:utf-8 -*-
class Solution:
    def FirstNotRepeatingChar(self, s):
        # write code here
        from collections import defaultdict
        hashTable = defaultdict(int)
        for i in s:
            hashTable[i] += 1
        for j in hashTable:
            if hashTable[j] == 1:
                return s.find(j)
        return 0
        
               