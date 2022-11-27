// https://leetcode.cn/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        return string(s, n) + string(s, 0, n);
    }
};

int main(){
    Solution s1;
    string s;
    int n;
    cin>>s>>n;
    cout<<s1.reverseLeftWords(s,n)<<endl;
    return 0;
}