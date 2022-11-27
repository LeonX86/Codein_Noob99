# https://leetcode.cn/problems/recursive-mulitply-lcci/
class Solution:
    def multiply(self, A: int, B: int) -> int:
        if B == 0:
            return 0
        return A + self.multiply(A, B - 1)

if __name__ == '__main__':
    A, B = map(int, input().split())
    #s = Solution()
    print(Solution().multiply(A, B))