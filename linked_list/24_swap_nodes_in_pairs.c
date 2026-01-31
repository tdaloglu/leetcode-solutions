#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *curr, *ileri, *prev = NULL;
    if (head == NULL) return head;
    if (head->next == NULL) return head;

    curr = head;
    ileri = curr->next;
    head = ileri;

    do {
        curr->next = ileri->next;
        ileri->next = curr;
        if (prev != NULL) prev->next = ileri;
        prev = curr;
        if (curr->next != NULL) {
            curr = curr->next;
            if (curr->next != NULL) ileri = curr->next;
            else break;
        } else break;
    } while (ileri != NULL);

    return head;
}