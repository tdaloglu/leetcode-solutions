#include <stdio.h>

struct ListNode {
    int val;
  struct ListNode *next;
};


struct ListNode* helper2(struct ListNode* list) {
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (list == NULL) {
        return NULL;
    }
    result->val = list->val;
    result->next = helper2(list->next);
    return result;
}

struct ListNode* helper(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (list1 == NULL) {
        result = helper2(list2);
        return result;
    }
    if (list2 == NULL) {
        result = helper2(list1);
        return result;
    }
    if (list1->val <= list2->val) {
        result->val = list1->val;
        result->next = helper(list1->next, list2);
    } else {
        result->val = list2->val;
        result->next = helper(list1, list2->next);
    }
    return result;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* result = helper(list1, list2);
    return result;
}