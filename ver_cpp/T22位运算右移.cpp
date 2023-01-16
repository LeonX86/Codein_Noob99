// https://leetcode.cn/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/
#include <bits/stdc++.h>
using namespace std;

/*v01*/
// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//         int sum = 0;
//         while(n){
//             if(n & 1){
//                 sum++;
//             }
//             n >>= 1;
//         }
//         return sum;
//     }
// };

/*v02*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while(n) {
            n &= (n-1);
            ++cnt;
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    uint32_t n;
    cin >> n;
    cout << s.hammingWeight(n) << endl;
    return 0;
}