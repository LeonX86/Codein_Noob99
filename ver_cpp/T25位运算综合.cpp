//https://leetcode.cn/problems/minimum-bit-flips-to-convert-number/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    int get1Cnt(int x){
        int cnt = 0;
        while(x) {
            x &= (x-1);
            ++cnt;
        }
        return cnt;
    }
public:
    int minBitFlips(int start, int goal) {
        return get1Cnt(start ^ goal);
    }
};

int main(){
    Solution s;
    int start, goal;
    cin >> start >> goal;
    cout << s.minBitFlips(start, goal) << endl;
    return 0;
}