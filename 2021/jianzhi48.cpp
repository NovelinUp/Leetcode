#include "thehead.h"

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> visited(128, -1);
        int start = 0, end = 0;
        int ans = 0;
        while (end < s.size()) {
            int ch = s[end];
            if (visited[ch] != -1) {
                start = max(start, visited[ch] + 1);
            }
            visited[ch] = end;
            ans = max(ans, end - start + 1);
            end++;
        }
        return ans;
    }
};