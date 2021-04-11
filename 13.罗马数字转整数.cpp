/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

#include <string>
using namespace std;


// @lc code=start
class Solution {
public:
    
    int romanToInt(string s) {
        int tmp = 0, ret = 0, last_val = 1001;
        for(auto && c : s) {
            switch(c) {
                case 'I': tmp = 1; break;
                case 'V': tmp = 5; break;
                case 'X': tmp = 10; break;
                case 'L': tmp = 50; break;
                case 'C': tmp = 100; break;
                case 'D': tmp = 500; break;
                case 'M': tmp = 1000; break;
            }

            ret += tmp;
            if(last_val < tmp) {
                ret -= last_val << 1;
            }

            last_val = tmp;
        }
        return ret;
    }
};
// @lc code=end

