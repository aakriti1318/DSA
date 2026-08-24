import numpy as np
class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        if n <= 1:
            return [[1]]
        
        matrix =  [[0] * n for _ in range(n)]
        result = []
        top, left, bottom, right = 0, 0, n-1, n-1
        num = 1
        while top<=bottom and left<=right:
            for i in range(left, right+1): # left to right
                matrix[top][i] = num
                num += 1
            top+=1
            for i in range(top, bottom+1): # top to bottom
                matrix[i][right] = num
                num+=1
            right-=1
            if top <= bottom:
                for i in range(right, left-1, -1): # right to left
                    matrix[bottom][i] = num
                    num += 1
                bottom-=1
            if left<=right:
                for i in range(bottom, top-1, -1): # bottom to top
                    matrix[i][left] = num
                    num += 1
                left+=1
        return matrix



