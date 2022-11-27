# https://leetcode.cn/problems/que-shi-de-shu-zi-lcof/
from typing import List

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        s = set(nums)
        for i in range(len(nums) + 1):
            if i not in s:
                return i

if __name__ == "__main__":
    nums = [int(x) for x in input().split(",")]#逗号分隔
    print(Solution().missingNumber(nums))