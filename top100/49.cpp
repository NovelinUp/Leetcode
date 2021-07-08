#include "thehead.h"

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> dic;
        for (auto s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            dic[key].push_back(s);
        }
        for (auto key : dic) {
            ans.push_back(key.second);
        }
        return ans;
    }
};