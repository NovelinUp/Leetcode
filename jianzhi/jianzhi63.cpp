#include "thehead.h"

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        int min = prices[0], ans = 0;
        for (int num : prices) {
            if (num < min) min = num;
            ans = max(ans, num - min);
        }
        return ans;
    }
};