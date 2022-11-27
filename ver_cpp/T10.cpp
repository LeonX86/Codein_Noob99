// https://leetcode.cn/problems/swap-numbers-lcci/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> swapNumbers(vector<int>& numbers) {
        vector<int> ans;
        ans.push_back(numbers[1]);
        ans.push_back(numbers[0]);
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> numbers;
    int n;
    cin >> n;
    numbers.push_back(n);
    cin >> n;
    numbers.push_back(n);
    vector<int> ans = s.swapNumbers(numbers);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}