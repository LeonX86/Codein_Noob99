# https://leetcode.cn/problems/shu-zhi-de-zheng-shu-ci-fang-lcof/ 不用考虑小数点
class Solution:
    def myPow(self, x: float, n: int) -> float:
        def quickMul(N):
            if N == 0:
                return 1.0
            y = quickMul(N // 2)
            return y * y if N % 2 == 0 else y * y * x
        
        return quickMul(n) if n >= 0 else 1.0 / quickMul(-n)

if __name__ == "__main__":
    x, n = map(float, input().split())
    print(Solution().myPow(x, n))