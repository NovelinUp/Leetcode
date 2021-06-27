#include "thehead.h"

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        queue<TreeNode*> treeque;
        treeque.push(root);
        while (!treeque.empty()) {
            vector<int> level;
            int length = treeque.size();
            for (int i = 0; i < length; i++) {
                TreeNode* cur = treeque.front();
                treeque.pop();
                level.push_back(cur->val);
                if (cur->left != nullptr) treeque.push(cur->left);
                if (cur->right != nullptr) treeque.push(cur->right);
            }
            if (ans.size() % 2 == 1) {
                reverse(level.begin(), level.end());
            }
            ans.push_back(level);
        }
        return ans;
    }
};