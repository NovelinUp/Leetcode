#include "thehead.h"

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int subsum = nums[0];
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            subsum = subsum > 0 ? subsum + nums[i] : nums[i];
            ans = ans >= subsum ? ans : subsum;
        }
        return ans;
    }
};