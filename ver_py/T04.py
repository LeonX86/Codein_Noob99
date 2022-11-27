# https://leetcode.cn/problems/valid-perfect-square/
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        ans = 0
        for i in range(1, num+1):
            if i*i <= num:
                ans = i
            else:
                break
        return ans*ans == num
    
if __name__ == "__main__":
    num = int(input())
    print(Solution().isPerfectSquare(num))