/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

#include <bits/stdc++.h>

using namespace std;

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1) {
            return s;
        }
        int z = numRows * 2 - 2;
        int cnt = s.size() / z;
        int res = s.size() % z;
        string ret;

        for(int i = 0; i < numRows; ++i) {
            int k = z - i;
            for(int j = 0; j < cnt; ++j) {
                ret.push_back(s[z*j+i]);
                if(i != 0 && i != numRows -1) {
                    ret.push_back(s[z*j+k]);
                }
            }
            if(i < res) {
                ret.push_back(s[z*cnt+i]);
            }

            if(k < res && i != 0 && i != numRows - 1) {
                ret.push_back(s[z*cnt+k]);
            }
        }
        return ret;
    }
};
// @lc code=end

