#include "thehead.h"

class Solution {
public:
    int get(int x) {
        return x & 1;
    }

    vector<int> exchange(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            while (left < right && get(nums[left]) == 1) left++;
            while (left < right && get(nums[right]) == 0) right--;
            swap(nums[left], nums[right]);
        }
        return nums;
    }
};