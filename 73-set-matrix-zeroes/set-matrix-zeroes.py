class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        m = len(matrix[0])
        
        rowtrack = [0 for _ in range(n)]
        coltrack = [0 for _ in range(m)]

        for i in range(0, n):
            for j in range(0, m):
                if matrix[i][j] == 0:
                    rowtrack[i] = -1
                    coltrack[j] = -1

        for i in range(0, n):
            for j in range(0, m):
                if rowtrack[i] == -1 or coltrack[j] == -1:
                    matrix[i][j] = 0
        
        return matrix
        
        