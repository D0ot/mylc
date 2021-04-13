/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

#include <bits/stdc++.h>

using namespace std;

// @lc code=start
class Solution {
public:

    void stub(string &s, string &l) {
        if(s.size() == 0) return;
        
        int i = 1;
        int tmp;
        int carry = 0;
        while((int)l.size() - i >=0) {
            if((int)s.size() - i >= 0) {
                tmp = s[s.size() - i] + l[l.size() - i] - '0' - '0' + carry;
            }else {
                tmp = l[l.size() - i] - '0' + carry;
            }
            carry = tmp >> 1;
            l[l.size() - i] = tmp % 2 + '0';
            ++i;
        }

        if(carry) {
            l.insert(l.begin(), '1');
        }
    }

    string addBinary(string a, string b) {
        if(a.size() < b.size()) {
            stub(a, b);
            return b;
        } else {
            stub(b, a);
            return a;
        }
   }
};
// @lc code=end