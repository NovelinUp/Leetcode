#include "thehead.h"

class Solution {
public:
    int cuttingRope(int n) {
        if (n <= 3) return n - 1;
        int a = n / 3;
        int b = n % 3;
        int ans = 1;
        for (int i = 0; i < a - 1; i++) {
            ans *= 3;
        }
        if (b == 0) ans *= 3;
        else if (b == 1) ans *= 4;
        else ans *= 6;
        return ans;
    }
};