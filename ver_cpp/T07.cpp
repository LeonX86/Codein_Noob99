// https://leetcode.cn/problems/power-of-two/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        if (n == 1) return true;
        long long ans = 1;
        while (ans < n) {
            ans *= 2;
            if (ans == n) return true;
        }
        return false;
    }
};

int main() {
    Solution s;
    long long n;
    cin >> n;
    cout << s.isPowerOfTwo(n) << endl;
    return 0;
}
