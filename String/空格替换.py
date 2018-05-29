# -*- coding:utf-8 -*-
class Solution:
    # s 源字符串
    def replaceSpace(self, s):
        oldPoint = len(s)-1
        numSpace = s.count(' ')
        s = s + ' '*numSpace*2
        newPoint = len(s)-1
        s = list(s)
        while oldPoint >= 0:
            if s[oldPoint] == ' ':
                s[newPoint] = '0'
                newPoint -= 1
                s[newPoint] = '2'
                newPoint -= 1
                s[newPoint] = '%'
            else:
                s[newPoint] = s[oldPoint]
            newPoint -= 1
            oldPoint -= 1
        return ''.join(s)