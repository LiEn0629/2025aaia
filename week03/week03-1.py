# week03-1.py
# Leetcode 2579.Count Total Number of Colored Cells
class Solution:
    def coloredCells(self, n: int) -> int:
        return n*n +(n-1)*(n-1)
