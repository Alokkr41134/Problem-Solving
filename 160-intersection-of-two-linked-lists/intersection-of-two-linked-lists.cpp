/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }

        // Initialize two pointers
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;

        // Traverse the lists
        while (ptrA != ptrB) {
            // Move to the next node or switch to the other list's head
            ptrA = (ptrA == nullptr) ? headB : ptrA->next;
            ptrB = (ptrB == nullptr) ? headA : ptrB->next;
        }

        // Either both pointers are null (no intersection) or they have met at the intersection
        return ptrA;
    }
};