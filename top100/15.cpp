#include "thehead.h"

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        if (nums.size() < 3 || nums.front() > 0 || nums.back() < 0) return ans;
        for (int i = 0; i < nums.size()-2; i++) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int left = i+1, right = nums.size()-1;
            while (left < right) {
                if (nums[right] < 0) break; 
                if (left > i+1 && nums[left] == nums[left-1]) {
                    left++;
                    continue;
                }
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                }
                else if (sum > 0) right--;
                else left++;
            }
        }
        return ans;
    }
};