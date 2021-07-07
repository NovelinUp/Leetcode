#include "thehead.h"

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dump = new ListNode(0);
        ListNode* last = dump;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                last->next = l1;
                last = last->next;
                l1 = l1->next;
            }
            else {
                last->next = l2;
                last = last->next;
                l2 = l2->next;
            }
        }
        if (l1 != nullptr) last->next = l1;
        if (l2 != nullptr) last->next = l2;
        return dump->next;
    }
};