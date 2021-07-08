#include "thehead.h"

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j =nums.size()-1;
        while (i <= j) {
            int mid = i + (j-i)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) {
                if (nums[j] >= target) i = mid+1;
                else j--;
            }
            else {
                if (nums[i] <= target) j = mid-1;
                else i++;
            }
        }
        return -1;
    }
};