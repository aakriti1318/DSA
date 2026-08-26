class Solution:
    def nextGreatestLetter(self, s: List[str], target: str) -> str:
        res = s[0]
        l = 0
        h = len(s)-1
        while l<=h:
            mid = (l+h)//2
            if s[mid] > target:
                res = s[mid]
                h = mid - 1
            else:
                l = mid + 1

        return res
