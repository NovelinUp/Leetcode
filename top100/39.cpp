#include "thehead.h"

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> candidates;
    int target;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        this->candidates = candidates;
        this->target = target;
        vector<int> combine; 
        recur(0, 0, combine);
        return ans;
    }

    void recur(int index, int sum, vector<int>& combine) {
        if (sum == target) {
            ans.push_back(combine);
            return;
        }
        else if (sum < target) {
            for (int i = index; i < candidates.size(); i++) {
                if (sum + candidates[i] > target) break;
                combine.emplace_back(candidates[i]);
                recur(i, sum+candidates[i], combine);
                combine.pop_back();
            }
        }
    }
};