#include "thehead.h"

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : left(nullptr), right(nullptr) {};
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {};
};

class Solution {
public:
    unordered_map<int, int> map;
    vector<int> preorder;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            map[inorder[i]] = i;
        }
        this->preorder = preorder;
        return create(0, 0, inorder.size()-1);
    }

    TreeNode* create(int root, int inL, int inR) {
        if (inL > inR) return nullptr;
        TreeNode* node = new TreeNode;
        node->val = preorder[root];
        int k = map[preorder[root]];
        node->left = create(root+1, inL, k-1);
        node->right = create(root+1+k-inL, k+1, inR);
        return node;
    }
};