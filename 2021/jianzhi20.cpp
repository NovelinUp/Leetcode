#include "thehead.h"

class Solution {
public:
    int ptr = 0;
    bool scanUnInteger(string s) {
        int pre = ptr;
        while (s[ptr] != '\0' && s[ptr] >= '0' && s[ptr] <= '9') ptr++;
        return ptr > pre;
    }

    bool scanInteger(string s) {
        if (s[ptr] == '+' || s[ptr] == '-') ptr++;
        return scanUnInteger(s);
    }

    bool isNumber(string s) {
        if (s.size() == 0) return false;
        while (s.size() > 0 && s[0] == ' ') s.erase(0, 1);
        while (s.size() > 0 && s[s.size() - 1] == ' ') s.erase(s.size() - 1, 1);
        bool numeric = scanInteger(s);
        if (s[ptr] == '.') {
            ptr++;
            numeric = scanUnInteger(s) || numeric;  //位置不能变，ptr还是要扫描
        }
        if (s[ptr] == 'e' || s[ptr] == 'E') {
            ptr++;
            numeric = numeric && scanInteger(s);
        }
        return numeric && s[ptr] == '\0';
    }
};