/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

#include <bits/stdc++.h>

using namespace std;

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 0) {
            return 0;
        }

        int ret = 0, r = s.size() - 1;
        bool af = false; // alphabet found

        for(int i = s.size() - 1; i >= 0; --i) {
            if(!af && isalpha(s[i])) {
                af = true;
                r = i;
            }

            if(af && s[i] == ' ') {
                return r - i;
            }
        }

        if(af) {
            return r + 1;
        } else {
            return 0;
        }

    }
};
// @lc code=end

