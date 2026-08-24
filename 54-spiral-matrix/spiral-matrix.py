class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix or not matrix[0]:
            return []
        result = []
        n = len(matrix)
        m = len(matrix[0])
        top, left, bottom, right = 0, 0, n-1, m-1
        while top<=bottom and left<=right:
            for i in range(left, right+1): # left to right
                result.append(matrix[top][i])
            top+=1
            for i in range(top, bottom+1): # top to bottom
                result.append(matrix[i][right])
            right-=1
            if top <= bottom:
                for i in range(right, left-1, -1): # right to left
                    result.append(matrix[bottom][i])
                bottom-=1
            if left<=right:
                for i in range(bottom, top-1, -1): # bottom to top
                    result.append(matrix[i][left])
                left+=1
        return result