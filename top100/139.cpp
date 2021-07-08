#include "thehead.h"

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dic;
        for (string word : wordDict) {
            dic.insert(word);
        }
        vector<bool> dp(s.size()+1);
        dp[0] = 1;
        for (int i = 1; i <= s.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && dic.find(s.substr(j, i-j)) != dic.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};