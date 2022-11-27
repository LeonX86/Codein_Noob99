// https://leetcode.cn/problems/a-number-after-a-double-reversal/submissions/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSameAfterReversals(int num) {
        return num==0 || num%10>0;
    }
};

int main(){
    int num;
    cin>>num;
    Solution s;
    cout<<s.isSameAfterReversals(num)<<endl;
}