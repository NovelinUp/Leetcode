#include "thehead.h"

class Solution {
public:
    int strToInt(string str) {
        int index = 0;
        bool flag = false;
        int ans = 0;
        while (index < str.size() && str[index] == ' ') index++;
        if (str[index] == '-') flag = true;
        if (str[index] == '+' || str[index] == '-') index++;
        while (index < str.size() && isdigit(str[index])) {
            int cur = str[index] - '0';
            if (ans > INT_MAX/10 || (ans == INT_MAX/10 && cur > 7)) {
                return flag ? INT_MIN : INT_MAX;
            }
            ans = ans * 10 + cur;
            index++;
        }
        return flag ? -ans : ans;
    }
};