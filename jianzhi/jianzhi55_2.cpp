#include "thehead.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return postorder(root) != -1;
    }

    int postorder(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = postorder(root->left);
        if (left == -1) return -1;
        int right = postorder(root->right);
        if (right == -1) return -1;
        return abs(left - right) < 2 ? max(left, right) + 1 : -1;
    }
};