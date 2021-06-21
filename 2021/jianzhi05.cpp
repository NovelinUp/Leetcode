#include "thehead.h"

class Solution {
public:
    string replaceSpace(string s) {
        int count = 0, len = s.size();
        for (char c : s) {
            if (c == ' ') count++;
        }
        s.resize(len + 2 * count);
        int i = len - 1, j = s.size() - 1;
        while (count != 0) {
            if (s[i] == ' ') {
                s[j--] = '0';
                s[j--] = '2';
                s[j] = '%';
                count--;
            }
            else {
                s[j] = s[i];
            }
            i--;
            j--;
        }
        return s;
    }
};