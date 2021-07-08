#include "thehead.h"

class Solution {
public:
    vector<int> nums;
    int target;
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) return vector<int> {-1, -1};
        this->nums = nums;
        this->target = target;
        int start = find(true);
        int end = find(false);
        if (start >= nums.size() || end < 0 || nums[start] != target) 
            return vector<int> {-1, -1};
        return vector<int> {start, end};
    }

    int find(bool islow) {
        int i = 0, j = nums.size()-1;
        while (i <= j) {
            int mid = i + (j-i)/2;
            if (nums[mid] == target) {
                if (islow) j = mid-1;
                else i = mid+1;
            }
            else if (nums[mid] < target) i = mid+1;
            else j = mid-1;
        }
        return islow ? j+1 : i-1;
    }
};