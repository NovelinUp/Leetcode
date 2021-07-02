#include "thehead.h"

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i, j;
        i = j = s.size() - 1;
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') i--;
            j = i;
            while (i >= 0 && s[i] != ' ') i--;
            if (i != j) {
                ans += s.substr(i+1, j - i);
                ans += " ";
            }
        }
        ans.pop_back();
        return ans;
    }
};