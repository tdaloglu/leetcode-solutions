/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        else {
            ListNode* current = head->next;
            ListNode* prev = head;

            while (current != nullptr) {
                if (current->val == prev->val) {
                    ListNode* temp = current;
                    current = current->next;
                    prev->next = current;
                    delete temp;
                } else {
                    prev = current;
                    current = current->next;
                }
            }
            return head;
        } 
    }
};