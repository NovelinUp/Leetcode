#include "thehead.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int ans;
    int k;
    int kthLargest(TreeNode* root, int k) {
        this->k = k;
        find(root);
        return ans;
    }

    void find(TreeNode* root) {
        if (root == nullptr) return;
        find(root->right);
        k--;
        if (k == 0) {
            ans = root->val;
            return;
        }
        find(root->left);
    }
};