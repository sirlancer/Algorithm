# -*- coding:utf-8 -*-
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    # 返回对应节点TreeNode
    def __init__(self):
        self.count = 0
    def KthNode(self, pRoot, k):
        # write code here
        if pRoot:
            target = self.KthNode(pRoot.left, k)
            if target:
                return target
            self.count += 1
            if self.count == k:
                return pRoot
            target = self.KthNode(pRoot.right, k)
            if target:
                return target
        else:
            return None
        