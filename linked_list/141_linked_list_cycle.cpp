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
    bool hasCycle(ListNode *head) {
        ListNode* slow, *fast;
        slow = head;
        fast = head;
        while (fast != nullptr) {
            fast = fast->next;
            if (fast != nullptr) fast = fast->next;
            else return false;
            if (fast == nullptr) return false;
            else {
                if (fast == slow) return true;
                else slow = slow->next;
            }
        }

        return false;
    }
};