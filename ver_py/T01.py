# https://leetcode.cn/problems/add-two-integers/
class Solution:
    def sum(self, num1: int, num2: int) -> int:
        num1 += num2
        return num1
    
if __name__ == "__main__":
    num1,num2 = map(int, input().split())
    print(Solution().sum(num1, num2))
