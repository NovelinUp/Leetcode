#include "thehead.h"

class Solution {
public:
    int findNthDigit(int n) {
        if (n < 10) return n;
        long a = 1;
        long b = 9;
        long c = 1;
        while (b < n) {
            a++;
            c *= 10;
            b += 9 * c * a;
        }
        long left = n - b + 9 * c * a - 1;
        string num = to_string(c + left / a);
        int ge = left % a;
        return num[ge] - '0';
    }
};