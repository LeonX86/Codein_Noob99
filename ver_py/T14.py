# https://leetcode.cn/problems/maximum-lcci/
class Solution:
    def maximum(self, a: int, b: int) -> int:
        # return max(a, b)
        return a if a>b else b
    
if __name__ == "__main__":
    s = Solution()
    a, b = map(int, input().split())
    print(s.maximum(a, b))