#include "thehead.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* slow, * fast;
        slow = fast = head;
        while (fast != NULL && k != 0) {
            fast = fast->next;
            k--;
        }
        while (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};