#include "thehead.h"

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dic(128, -1);
        int ans = 0;
        int start = 0, end = 0;
        for (; end < s.size(); end++) {
            int ch = s[end];
            start = max(start, dic[ch] + 1);
            dic[ch] = end;
            ans = max(ans, end - start + 1);
        }
        return ans;
    }
};