# -*- coding: utf-8 -*-
# https://leetcode.cn/problems/single-number/
from typing import List
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ans = 0
        for i in nums:
            ans ^= i
        return ans
if __name__ == "__main__":
    s = Solution()
    nums = [int(x) for x in input().split()]
    print(s.singleNumber(nums))