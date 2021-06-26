#include "thehead.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode* dump = new ListNode(0);
        dump->next = head;
        ListNode* pre = dump, *cur = head;
        while (cur != NULL) {
            if (cur->val == val) {
                pre->next = cur->next;
                break;
            }
            pre = cur;
            cur = cur->next;
        }
        return dump->next;
    }
};