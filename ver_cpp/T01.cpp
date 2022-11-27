// https://leetcode.cn/problems/add-two-integers/
#include<bits/stdc++.h>
using namespace std;
// class Solution
// {
// public:
//     int sum(int num1, int num2)
//     {
//         return num1 + num2;
//     }
// } s;
// int main()
// {
//     // int a;
//     int a = s.sum(2, 4);
//     cout<<a;
//     return 0;
// }

/*V2*/
#include <iostream>
using namespace std;
class Solution {
public:
    int sum(int num1, int num2) {
        return num1 += num2;
    }
};

int main()
{
    int num1, num2;
    Solution s;
    cin >> num1 >> num2;
    cout<<s.sum(num1,num2)<<endl;
    return 0;
}