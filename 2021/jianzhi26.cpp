#include "thehead.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSub(TreeNode* A, TreeNode* B) {
        if (B == nullptr) return true;
        if (A == nullptr || A->val != B->val) return false;
        return isSub(A->left, B->left) && isSub(A->right, B->right);
    }

    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (A == nullptr || B == nullptr) return false;
        if (A->val == B->val) return isSub;
        return isSubStructure(A->left, B->left) || isSubStructure(A->right, B->right);
    }
};