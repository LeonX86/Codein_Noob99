// https://leetcode.cn/problems/complement-of-base-10-integer/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0){
            return 1;
        }
        int k = 0;
        while(1) {
            if((1<<k) > n){
                break;
            }
            ++k;
        }
        return (1<<k)-1-n;
    }
};
/*
10101
01010

11111
2**k - 1
*/

int main()
{
    int n;
    cin >> n;
    cout << Solution().bitwiseComplement(n) << endl;
    return 0;
}