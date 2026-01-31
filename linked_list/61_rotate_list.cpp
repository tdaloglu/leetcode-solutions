struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* current = head;
        int count = 0;
        while (current != nullptr) {
            current = current->next;
            count++;
        }
        while (k % count > 0) {
            current = head;
            while (current->next->next != nullptr) {
                current = current->next;
            }
            current->next->next = head;
            head = current->next;
            current->next = nullptr;
            k--;
        }
        return head;
    }
};