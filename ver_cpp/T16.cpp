// https://leetcode.cn/problems/single-number/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        // for(auto &e:nums)ans^=e;
        // return ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans ^= nums[i];
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    int i=0;
    while(scanf("%d",&i)!=EOF)nums.push_back(i);
//    while (cin >> i)
//        nums.push_back(i);
//        
    for (auto &e : nums)
    {
        cout << e << " ";
    }
    cout << s.singleNumber(nums) << endl;
    return 0;
}
