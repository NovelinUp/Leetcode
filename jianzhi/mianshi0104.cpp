#include "thehead.h"

class Solution {
public:
    bool canPermutePalindrome(string s) {
        vector<int> dic(128, 0);
        for (char ch : s) {
            dic[ch]++;
        }
        bool flag = false;
        for (int ele : dic) {
            if (ele%2 != 0) {
                if (flag) return false;
                flag = true;
            }
        }
        return true;
    }
};