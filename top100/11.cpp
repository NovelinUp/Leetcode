#include "thehead.h"

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int ans = 0, area = 0;
        while (left < right) {
            int h = min(height[left], height[right]);
            area = (right - left) * h;
            ans = max(ans, area);
            if (height[left] == h) left++;
            else right--;
        }
        return ans;
    }
};