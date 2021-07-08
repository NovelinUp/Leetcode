#include "thehead.h"

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int left, right;
        ans.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            auto interval = intervals[i];
            left = interval[0];
            right = interval[1];
            if (right < ans.back()[1]) continue;
            if (left < ans.back()[1]) {
                ans.back()[1] = right;
            }
            else {
                ans.push_back(interval);
            }
        }
        return ans;
    }
};