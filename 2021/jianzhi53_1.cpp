#include "thehead.h"

class Solution {
public:
    vector<int> nums;
    int target;
    int search(vector<int>& nums, int target) {
        this->nums = nums;
        this->target = target;
        int left = binarysearch(0, nums.size() - 1, true);
        int right = binarysearch(0, nums.size() - 1, false);
        if (left < nums.size() && nums[left] == target) return right - left + 1;
        return 0;
    }

    int binarysearch(int left, int right, bool islow) {
        int i = left, j = right;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] == target) {
                if (islow) {
                    j = mid-1;
                }
                else {
                    i = mid+1;
                }
            }
            else if (nums[mid] > target) j = mid - 1;
            else i = mid + 1;
        }
        return islow ? j+1 : i-1;
    }
};