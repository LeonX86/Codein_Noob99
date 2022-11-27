//https://leetcode.cn/problems/que-shi-de-shu-zi-lcof/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int size = nums.size()+1;
        for(int i=0;i<size;++i){
            sum += i;
        }
        for (int i = 0; i < nums.size(); ++i) {
            sum -= nums[i];
        }
        return sum;
    }
};

int main(){
    Solution s;
    vector<int> nums;
    int i;
    while (cin >> i) {
        nums.push_back(i);
        if (cin.get() == '\n') break; //逗号输入，换行结束
    }
    cout << s.missingNumber(nums) << endl;
}