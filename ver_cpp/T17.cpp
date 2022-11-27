// https://leetcode.cn/problems/missing-number/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        for (int i = 0; i < n; ++i)
            sum -= nums[i];
        return sum;
    }
    
};

int main()
{
    Solution s;
    int i;
    vector<int> nums;
    while (cin >> i) nums.push_back(i);
    cout << s.missingNumber(nums) << endl;
    return 0;
}