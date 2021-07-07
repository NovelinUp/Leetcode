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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* l = new ListNode;
        ListNode* r = l;
        while (l1 && l2) {
            int sum = l1->val + l2->val + carry;
            ListNode* node = new ListNode(sum%10);
            carry = sum/10;
            r->next = node;
            r = node;
            l1 = l1->next;
            l2 = l2->next;
        }
        l1 = l1 ? l1 : l2;
        while (l1) {
            int sum = l1->val + carry;
            ListNode* node = new ListNode(sum%10);
            carry = sum/10;
            r->next = node;
            r = node;
            l1 = l1->next;
        }
        if (carry) {
            ListNode* node = new ListNode(carry);
            r->next = node;
        }
        return l->next;
    }
};