class Solution:
    def getreqDays(self, weights: List[int], maxcap: int) -> int:
        reqday = 1
        cap = 0
        for w in weights:
            cap += w
            if cap > maxcap:
                reqday += 1
                cap = w
        return reqday

    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l = max(weights)
        h = sum(weights)
        while l<h:
            cap = (l+h)//2
            reqDays = self.getreqDays(weights, cap)

            if reqDays > days:
                l = cap + 1
            else: 
                h = cap 

        return l
