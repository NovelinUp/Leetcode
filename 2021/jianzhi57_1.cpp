#include "thehead.h"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            if (nums[i] + nums[j] == target) break;
            else if (nums[i] + nums[j] < target) i++;
            else j--;
        }
        return vector<int> {nums[i], nums[j]};
    }
};