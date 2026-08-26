class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        sums = 0
        sumt = 0
        for c in s:
            sums += ord(c)
        for c in t:
            sumt += ord(c)
        
        return chr(sumt-sums)