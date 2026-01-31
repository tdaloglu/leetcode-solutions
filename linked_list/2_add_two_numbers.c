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
    struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode)), *temp;
    int reminder = 0;
    temp = result;
    while (l1 != 0 || l2 != 0) {
        int val1 = 0, val2 = 0;
        temp->val = 0;
        if (l1 != 0) val1 = l1->val;
        if (l2 != 0) val2 = l2->val;
        temp->val = val1 + val2;
        if (reminder) temp->val++;
        if (temp->val >= 10){
            temp->val %= 10;
            reminder = 1;
        } else reminder = 0;
        if (l1 != 0) l1 = l1->next;
        if (l2 != 0) l2 = l2->next;
        if (l1 != 0 || l2 != 0 || reminder) {
            temp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            temp = temp->next;
        }
    }
    if (reminder) temp->val = 1;
    temp->next = NULL;
    return result;
}