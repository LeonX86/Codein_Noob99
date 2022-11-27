# -*- coding: utf-8 -*-
# https://leetcode.cn/problems/missing-number/
from typing import List

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        for i, num in enumerate(nums):
            if num != i:
                return i
        return len(nums)

if __name__ == "__main__":
    s = Solution()
    nums = [int(x) for x in input().split()]
    print(s.missingNumber(nums))