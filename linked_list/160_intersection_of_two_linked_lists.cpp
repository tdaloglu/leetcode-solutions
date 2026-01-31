/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;
        bool A = false;
        bool B = false;

        do {
            if (ptrA == ptrB) return ptrA;
            ptrA = ptrA->next;
            ptrB = ptrB->next;
            if (ptrA == nullptr && A == false) {
                ptrA = headB;
                A = true;
            }
            if (ptrB == nullptr && B == false) {
                ptrB = headA;
                B = true;
            }
        } while (ptrA != nullptr && ptrB != nullptr);

        return nullptr;
    }
};