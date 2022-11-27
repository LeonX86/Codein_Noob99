# https://leetcode.cn/problems/powx-n/
class Solution:
    def myPow(self, x: float, n: int) -> float:
        return x**n


if __name__ == "__main__":
    x, n = map(float, input().split())
    print(Solution().myPow(x, n))
