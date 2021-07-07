#include "thehead.h"

class Solution {
public:
    vector<string> ans;
    int n;
    vector<string> generateParenthesis(int n) {
        int left = 0, right = 0;
        this->n = n;
        recur(left, right, "");
        return ans;
    }

    void recur(int left, int right, string combine) {
        if (left == n && right == n) {
            ans.push_back(combine);
            return;
        }
        if (left < n) {
            combine += "(";
            recur(left+1, right, combine);
            combine.pop_back();
        }
        if (right < left) {
            combine += ")";
            recur(left, right+1, combine);
            combine.pop_back();
        }
        
    }
};