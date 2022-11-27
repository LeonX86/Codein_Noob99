# https://leetcode.cn/problems/swap-numbers-lcci/
from typing import List
class Solution:
    def swapNumbers(self, numbers: List[int]) -> List[int]:
        numbers[0], numbers[1] = numbers[1], numbers[0]
        return numbers

if __name__ == '__main__':
    numbers = [int(x) for x in input().split()]
    print(Solution().swapNumbers(numbers))