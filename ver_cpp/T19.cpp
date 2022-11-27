// https://leetcode.cn/problems/xor-operation-in-an-array/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int ans = 0;
        for (int i = 0; i < n; ++i)
            ans ^= start + 2 * i;
        return ans;
    }
};

int main()
{
    int n, start;
    cin >> n >> start;
    cout << Solution().xorOperation(n, start) << endl;
    return 0;
}