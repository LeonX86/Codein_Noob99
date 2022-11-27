#  https://leetcode.cn/problems/power-of-four/
class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        ans = 1
        if n <= 0:
            return False
        elif n == 1:
            return True
        else:
            while ans < n:
                ans *= 4
            if ans == n:
                return True
            else:
                return False
if __name__ == "__main__":
    n = int(input())
    print(Solution().isPowerOfFour(n))