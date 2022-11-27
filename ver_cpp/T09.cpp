// https://leetcode.cn/problems/power-of-four/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n <= 0)
            return false;
        if (n == 1)
            return true;
        long long ans = 1;
        while (ans < n)
        {
            ans *= 4;
            if (ans == n)
                return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
    long long n;
    cin >> n;
    cout << s.isPowerOfFour(n) << endl;
    return 0;
}