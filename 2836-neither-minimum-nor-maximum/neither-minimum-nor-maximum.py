class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        minn = float('inf')
        maxx = float('-inf')

        if len(nums) <= 2:
            return -1

        for i in nums:
            maxx = max(maxx, i)
            minn = min(minn, i)
        
        for i in nums:
            if i != maxx and i != minn:
                return i
                break

        return -1