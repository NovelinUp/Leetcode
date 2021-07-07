#include "thehead.h"

class Solution {
public:
    char firstUniqChar(string s) {
        vector<int> visit(128, 0);
        for (auto str : s) {
            visit[str]++;
        }
        char res = ' ';
        for (auto str : s) {
            if (visit[str] == 1) {
                res = str;
                break;
            }
        }
        return res;
    }
};