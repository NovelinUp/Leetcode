#include "thehead.h"

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dist = nums[0];
        for (int i = 1; i <= dist; i++) {
            dist = max(dist, i + nums[i]);
            if (dist >= nums.size() - 1) return true;
        }
        return false;
    }
};