class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        # Lower Bound
        n = len(nums)
        lb = n
        l = 0
        h = n-1
        while l<=h:
            mid = (l+h)//2
            if nums[mid] >= target:
                lb = mid
                h = mid-1
            else:
                l = mid+1
        return lb