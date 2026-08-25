class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        mp = set(nums)
        
        ans = k
        while ans in mp:
            ans += k
            
        return ans

        