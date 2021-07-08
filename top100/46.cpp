#include "thehead.h"

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> nums;
    vector<vector<int>> permute(vector<int>& nums) {
        this->nums = nums;
        recur(0);
        return ans;
    }

    void recur(int index) {
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        } 
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            recur(index+1);
            swap(nums[index], nums[i]);
        }
    }
};