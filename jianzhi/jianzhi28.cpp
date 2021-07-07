#include "thehead.h"

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSame(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) return true;
        if (left == nullptr || right == nullptr) return false;
        return (left->val == right->val) && 
            isSame(left->left, right->right) && 
            isSame(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return isSame(root->left, root->right);
    }
};