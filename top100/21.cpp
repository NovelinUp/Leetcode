#include "thehead.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dump = new ListNode;
        ListNode* r = dump;
        while (l1 && l2) {
            if (l1->val <= l2->val) {
                r->next = l1;
                l1 = l1->next;
            }
            else {
                r->next = l2;
                l2 = l2->next;
            }
            r=r->next;
        }
        l1 = l1 ? l1 : l2;
        if (l1) r->next = l1;
        return dump->next;
    }
};