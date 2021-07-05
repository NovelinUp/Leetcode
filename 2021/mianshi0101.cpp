#include "thehead.h"

class Solution {
public:
    bool isUnique(string astr) {
        unordered_map<char, bool> dic;
        for (char ch : astr) {
            if (dic.find(ch) != dic.end()) return false;
            dic[ch] = true;
        }
        return true;
    }
};