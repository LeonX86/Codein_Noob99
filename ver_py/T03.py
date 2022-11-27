# https://leetcode.cn/problems/sqrtx/
from math import sqrt
class Solution:
    def mySqrt(self, x: int) -> int:
        return int(sqrt(x))
    
if __name__ == "__main__":
    x = int(input())
    print(Solution().mySqrt(x))