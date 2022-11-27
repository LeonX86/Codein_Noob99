//https://leetcode.cn/problems/hamming-distance/submissions/

#include<bits/stdc++.h>
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
    int hammingDistance(int x, int y) {
        return get1Cnt(x ^ y);
    }
};

int main(){
    Solution s;
    int x, y;
    cin >> x >> y;
    cout << s.hammingDistance(x, y) << endl;
    return 0;
}