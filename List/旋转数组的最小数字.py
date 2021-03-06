# -*- coding:utf-8 -*-
class Solution:
    def minNumberInRotateArray(self, rotateArray):
        # write code here
        left = 0
        right = len(rotateArray)-1
        while rotateArray[left] >= rotateArray[right]:
            if right-left == 1:
                return rotateArray[right]
            mid = (right + left) / 2
            if rotateArray[mid] >= rotateArray[left]:
                left = mid
            elif rotateArray[mid] <= rotateArray[right]:
                right = mid