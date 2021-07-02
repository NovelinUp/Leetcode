#include "thehead.h"

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        int i = 1, j = 2, sum = 3;
        vector<vector<int>> ans;
        while (i < j) {
            if (sum == target) {
                vector<int> temp;
                for (int k = i; k <= j; k++) temp.push_back(k);
                ans.push_back(temp);
                j++;
                sum += j;
            }
            else if (sum < target) {
                j++;
                sum += j;
            }
            else {
                sum -= i;
                i++;
            }
        }
        
        return ans;
    }
};