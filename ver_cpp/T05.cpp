// https://leetcode.cn/problems/shu-zhi-de-zheng-shu-ci-fang-lcof/ 不用考虑小数点
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double quickMul(double x, long long N) {
        if (N == 0) {
            return 1.0;
        }
        double y = quickMul(x, N / 2);
        return N % 2 == 0 ? y * y : y * y * x;
    }

    double myPow(double x, int n) {
        long long N = n;
        return N >= 0 ? quickMul(x, N) : 1.0 / quickMul(x, -N);
    }
};

int main() {
    double x;
    long long N;
    cin >> x >> N;
    Solution s;
    cout << s.quickMul(x, N) << endl;
    return 0;
}