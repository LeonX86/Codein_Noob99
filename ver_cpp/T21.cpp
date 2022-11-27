// https://leetcode.cn/problems/number-complement/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        if (num == 0){
            return 1;
        }
        int k = 0;
        while(1){
            if (((long long)1<<k) > num){
                break;
            }
            ++k;
        }
        return ((long long)1<<k)-1-num;
    }
};

int main(){
    int n;
    cin >> n;
    cout << Solution().findComplement(n) << endl;
    return 0;
}