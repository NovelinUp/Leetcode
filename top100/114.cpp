#include "thehead.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void flatten(TreeNode* root) {
        vector<TreeNode*> memo;
        preorder(root, memo);
        TreeNode* pre, *cur;
        for (int i = 1; i < memo.size(); i++) {
            pre = memo[i-1];
            cur = memo[i];
            pre->left = nullptr;
            pre->right = cur;
        }
    }

    void preorder(TreeNode* root, vector<TreeNode*> memo) {
        if (root == nullptr) return;
        memo.push_back(root);
        preorder(root->left, memo);
        preorder(root->right, memo);
    }
};