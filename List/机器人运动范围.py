# -*- coding:utf-8 -*-
class Solution:
    def movingCount(self, threshold, rows, cols):
        # write code here
        visited = [False for i in range(rows*cols)]
        count = self.movingCountCore(threshold, rows, cols, 0, 0, visited)
        return count
    def movingCountCore(self, threshold, rows, cols, row, col, visited):
        count =0
        if self.getDigitSum(row)+self.getDigitSum(col) <= threshold and 0 <= row and row < rows and 0 <= col and col < cols and not visited[row*cols+col]:    
            visited[row*cols+col] = True
            count = 1 + self.movingCountCore(threshold, rows, cols, row, col-1, visited) + self.movingCountCore(threshold, rows, cols, row, col+1, visited) + self.movingCountCore(threshold, rows, cols, row+1, col, visited) + self.movingCountCore(threshold, rows, cols, row-1, col, visited)
        return count
    def getDigitSum(self, number):
        sum = 0
        while number >0:
            sum += number % 10
            number /= 10
        return sum