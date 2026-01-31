#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* curr, *prev;
    int count = 0, num;
    curr = head;

    do {
        curr = curr->next;
        count++;
    } while (curr != NULL);

    num = count - n + 1;
    if (num == 1) {
        head = head->next;
        return head;
    }
    curr = head;
    prev = NULL;
    while (num > 1) {
        prev = curr;
        curr = curr->next;
        num--;
    }
    prev->next = curr->next;
    free(curr);
    return head;
}