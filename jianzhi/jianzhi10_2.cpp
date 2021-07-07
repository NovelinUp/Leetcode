#include "thehead.h"

class Solution {
public:
    int numWays(int n) {
        int a = 1, b = 1;
        int ans = 1;
        for (int i = 2; i <= n; i++) {
            ans = (a + b) % 1000000007;
            a = b;
            b = ans;
        }
        return ans;
    }
};