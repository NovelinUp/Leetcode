#include "thehead.h"

class Solution {
public:
    int cuttingRope(int n) {
        if (n <= 3) return n - 1;
        int a = n / 3;
        int b = n % 3;
        int p = 1000000007;
        long ans = 1;
        for (int i = 0; i < a - 1; i++) {
            ans = (ans * 3) % p;
        }
        if (b == 0) ans = (ans * 3) % p;
        else if (b == 1) ans = (ans * 4) % p;
        else ans = (ans * 6) % p;
        return ans;
    }
};