#include "thehead.h"

class Solution {
public:
    vector<int> postorder;
    bool verifyPostorder(vector<int>& postorder) {
        this->postorder = postorder;
        return dfs(0, postorder.size() - 1);
    }

    bool dfs(int l, int r) {
        if (l >= r) return true;
        int root = postorder[r];
        int right = l;
        while (right < r && postorder[right] < postorder[r]) right++;
        for (int i = right; i < r; i++) {
            if (postorder[i] < postorder[r]) return false;
        }
        return dfs(l, right - 1) && dfs(right, r-1);
    }
};