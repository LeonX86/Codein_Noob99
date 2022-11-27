// https://leetcode.cn/problems/determine-color-of-a-chessboard-square/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x = coordinates[0] - 'a';
        int y = coordinates[1] - '1';
        return (x + y) % 2 == 1;
    }
};

int main(){
    Solution s;
    string coordinates;
    cin>>coordinates;
    cout<<s.squareIsWhite(coordinates)<<endl;
    return 0;
}