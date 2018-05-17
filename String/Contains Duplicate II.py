class Solution:
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        temp = dict()
        for i, num in enumerate(nums):
            if num in temp and abs(i-temp[num]) <= k:
                return True
            temp[num] = i