#include "thehead.h"

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) return ans;
        queue<TreeNode*> treeque;
        treeque.push(root);
        while (!treeque.empty()) {
            TreeNode* cur = treeque.front();
            treeque.pop();
            ans.push_back(cur->val);
            if (cur->left != nullptr) {
                treeque.push(cur->left);
            }
            if (cur->right != nullptr) {
                treeque.push(cur->right);
            }
        }
        return ans;
    }
};