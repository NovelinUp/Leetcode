#include "thehead.h"

class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        vector<int> dic(128, 0);
        for (char ch : s1) {
            dic[ch]++;
        }
        for (char ch : s2) {
            dic[ch]--;
        }
        for (int ele : dic) {
            if (ele != 0) return false;
        }
        return true;
    }
};