#include "thehead.h"

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set;
        for (int num : nums) {
            num_set.insert(num);
        }
        int ans = 0;
        for (auto num : num_set) {
            if (!num_set.count(num-1)) {
                int cur = num;
                int cnt = 1;
                while (num_set.count(num+1)) {
                    num += 1;
                    cnt++;
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};