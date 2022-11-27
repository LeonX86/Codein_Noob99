// https://leetcode.cn/problems/maximum-lcci/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximum(int a, int b) {
        // return max(a,b);
        return a > b ? a : b;
    }
};

int main(){
    Solution s;
    int a,b;
    cin>>a>>b;
    cout<<s.maximum(a,b)<<endl;
    return 0;
}