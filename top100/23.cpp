#include "thehead.h"

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pos = nums.size()-2;
        while (pos >= 0 && nums[pos] >= nums[pos+1]) pos--;
        if (pos >= 0) {
            int next = nums.size()-1;
            while (next > pos && nums[next] <= nums[pos]) next--;
            swap(nums[pos], nums[next]);
        }
        sort(nums.begin() + pos + 1, nums.end());
    }
};