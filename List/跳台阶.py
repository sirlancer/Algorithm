# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.cache = dict()
        self.cache[1] = 1
        self.cache[2] = 2
    def jumpFloor(self, number):
        # write code here
        if number <=2 :
            return self.cache[number]
        if (number-1) in self.cache and (number-2) in self.cache:
            return self.cache[number-1] + self.cache[number-2]
        self.cache[number-1] = self.jumpFloor(number-1)
        self.cache[number-2] = self.jumpFloor(number-2)
        return self.cache[number-1] + self.cache[number-2]