#include "thehead.h"

class Solution {
public:
    bool isStraight(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        for (int i = 0; i < 4; i++) {
            if (nums[i] == 0) cnt++;
            else if (nums[i] == nums[i + 1]) return false;
        }
        return nums[4] - nums[cnt] < 5;
    }
};