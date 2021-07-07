#include "thehead.h"

class Solution {
public:
    vector<string> ans;
    unordered_map<char, string> dic;
    string digits;
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) return ans;
        this->digits = digits;
        dic = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        recur(0, "");
        return ans;
    }

    void recur(int index, string combine) {
        if (index == digits.size()) {
            ans.push_back(combine);
            return;
        }
        for (char ch : dic[digits[index]]) {
            combine += ch;
            recur(index+1, combine);
            combine.pop_back();
        }
    }
};