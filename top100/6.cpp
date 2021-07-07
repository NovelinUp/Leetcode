#include "thehead.h"

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector<string> memo(min(numRows, int(s.size())));
        int cur = 0, dir = 1;
        for (char ch : s) {
            memo[cur] += ch;
            if (cur == numRows-1) dir = -1;
            else if (cur == 0) dir = 1;
            cur += dir;
        }
        string ans;
        for (string s : memo) {
            ans += s;
        }
        return ans;
    }
};