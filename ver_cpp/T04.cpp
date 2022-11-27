// https://leetcode.cn/problems/valid-perfect-square/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int ans = 0;
        for (int i = 0; i <= num; ++i)
        {
            if ((long long)i * i <= num)
            {
                ans = i;
            }
            else
            {
                break;
            }
        }
        return (long long)ans * ans == num;
    }
};

int main()
{
    int num;
    Solution s;
    cin >> num;
    cout << s.isPerfectSquare(num) << endl;
    return 0;
}