#include "thehead.h"

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> nums;
    vector<vector<int>> subsets(vector<int>& nums) {
        this->nums = nums;
        vector<int> combine;
        recur(0, combine);
        return ans;
    }

    void recur(int index, vector<int> combine) {
        if (index == nums.size()) return;
        ans.push_back(combine);
        for(int i = index; i < nums.size(); i++) {
            combine.push_back(nums[i]);
            recur(index+1, combine);
            combine.pop_back();
        }
    }
};