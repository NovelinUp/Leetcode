#include "thehead.h"


class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};

class Solution {
public:
    Node* dump;
    Node* r;
    Node* treeToDoublyList(Node* root) {
        if (root == nullptr) return nullptr;
        dump = new Node();
        r = dump;
        dfs(root);
        r->right = dump->right;
        dump->right->left = r;
        return dump->right;
    }

    void dfs(Node* root) {
        if (root == nullptr) return;
        dfs(root->left);
        r->right = root;
        root->left = r;
        r = r->right;
        dfs(root->right);
    }
};