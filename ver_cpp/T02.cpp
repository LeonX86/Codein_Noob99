// https://leetcode.cn/problems/jJ0w9p/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        return (int)sqrt(x);
    }
};

int main()
{
    int x;
    Solution s;
    cin >> x;
    cout << s.mySqrt(x) << endl;
    return 0;
}