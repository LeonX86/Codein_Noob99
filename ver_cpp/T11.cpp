// https://leetcode.cn/problems/recursive-mulitply-lcci/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int multiply(int A, int B) {
        int Max = max(A, B), Min = min(A, B);
        if(Min==0) return 0;
        //Min * Max = (Min - 1 + 1) * Max = (Min - 1) *Max +Max 
        return multiply(Min - 1, Max) + Max;
    }
};