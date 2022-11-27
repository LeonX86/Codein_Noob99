# -*- coding: utf-8 -*-
# https://leetcode.cn/problems/determine-color-of-a-chessboard-square/
class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        x = ord(coordinates[0]) - ord('a')
        y = int(coordinates[1]) - ord("1")
        return (x + y) % 2 == 1
    
if __name__ == "__main__":
    s = Solution()
    coordinates = input()
    print(s.squareIsWhite(coordinates))