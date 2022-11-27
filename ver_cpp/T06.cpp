// https://leetcode.cn/problems/powx-n/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};

int main() {
    double x;
    int n;
    cin >> x >> n;
    Solution s;
    cout << s.myPow(x, n) << endl;
    return 0;
}