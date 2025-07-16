class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        if len(nums) > 1 and k >= 1:
            k = k % len(nums)
            old = nums[0]
            index = 0
            nxt = 0
            start = 0
            for i in range(len(nums)):
                nxt = (index + k) % len(nums)
            
                new = nums[nxt]
                nums[nxt] = old
                old = new
                index = nxt
                if index == start:
                    start = (start + 1) % len(nums)
                    index = start
                    old = nums[index]
            
                
            
            
            
            
