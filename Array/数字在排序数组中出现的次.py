
# -*- coding:utf-8 -*-
class Solution:
    def GetNumberOfK(self, data, k):
        # write code here
        count = 0
        firstK = self.getFirstK(data, k, 0, len(data)-1)
        lastK = self.getLastK(data, k, 0, len(data)-1)
        if firstK > -1 and lastK > -1:
            count = lastK - firstK + 1
        return count
    def getFirstK(self, data, k, start, end):
        if start > end:
            return -1
        middle = (start + end) / 2
        if data[middle] == k:
            if (middle >0 and data[middle-1] !=k) or middle == 0:
                return middle
            else:
                end = middle - 1
        elif data[middle] < k:
            start = middle + 1
        else:
            end = middle - 1
        return self.getFirstK(data, k, start, end)
    def getLastK(self, data, k, start, end):
        if start > end:
            return -1
        middle = (start + end) / 2
        if data[middle] == k:
            if (middle < len(data)-1 and data[middle+1] != k) or middle == len(data)-1:
                return middle
            else:
                start = middle + 1
        elif data[middle] < k:
            start =  middle + 1
        else:
            end = middle - 1
        return self.getLastK(data, k, start, end)