# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.cache = dict()
        self.cache[0] = 0
        self.cache[1] = 1
    def Fibonacci(self, n):
        # write code here
        if n < 2:
            return self.cache[n]
        if (n-1) in self.cache and (n-2) in self.cache:
            return self.cache[n-1]+self.cache[n-2]
        self.cache[n-1] = self.Fibonacci(n-1)
        self.cache[n-2] = self.Fibonacci(n-2)
        return self.cache[n-1] + self.cache[n-2]