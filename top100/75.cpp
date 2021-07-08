#include "thehead.h"

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n-1; i++) {
            bool flag = false;
            for (int j = 0; j < n-1-i; j++) {
                if (nums[j] > nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                    flag = true;
                }
            }
            if (!flag) break;
        }
    }
};