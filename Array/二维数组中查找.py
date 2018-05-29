# -*- coding:utf-8 -*-
class Solution:
    # array 二维列表
    def Find(self, target, array):
        # write code here
        rowIndex = len(array) - 1
        columnIndex = len(array[0]) - 1
        i, j = 0, columnIndex
        while i<=rowIndex and j>=0:
            if array[i][j] == target:
                return True
            elif array[i][j] < target:
                i += 1
            else:
                j -= 1
        return False