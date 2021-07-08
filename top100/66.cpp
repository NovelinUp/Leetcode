#include "thehead.h"

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {   
        int len = digits.size();
        int carry = 0;
        if (digits[len-1] == 9) {
            carry = 1;
            digits[len-1] = 0;
        }
        else digits[len-1] += 1;
        int i = len-2;
        for (; i >= 0 && carry != 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            }
            else {
                carry = 0;
                digits[i] += 1;
            }
        }
        if (carry == 1 && i < 0) {
            vector<int> ans(len+1, 0);
            ans[0] = 1;
            return ans;
        }
        return digits;
    }
};