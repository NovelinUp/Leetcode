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
            int length = treeque.size();
            vector<int> level;
            for (int i = 0; i < length; i++) {
                TreeNode* cur = treeque.front();
                treeque.pop();
                level.push_back(cur->val);
                if (cur->left != nullptr) treeque.push(cur->left);
                if (cur->right != nullptr) treeque.push(cur->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};