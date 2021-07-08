#include "thehead.h"

class Solution {
public:
    int climbStairs(int n) {
        int a = 1, b = 1;
        int c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};