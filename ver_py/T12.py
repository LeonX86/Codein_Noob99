# https://leetcode.cn/problems/a-number-after-a-double-reversal/submissions/
class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        return num==0 or num % 10 > 0
if __name__ == "__main__":
    num = int(input())
    print(Solution().isSameAfterReversals(num))