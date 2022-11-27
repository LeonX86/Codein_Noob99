# https://leetcode.cn/problems/jJ0w9p/
class Solution:
    def mySqrt(self, x: int) -> int:
        return int(x**0.5)
if __name__ == "__main__":
    x = int(input())
    print(Solution().mySqrt(x))