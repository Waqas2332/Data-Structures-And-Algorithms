#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
} *first = NULL;

void deleteNode(struct ListNode *node)
{
    node->val = node->next->val;
    node->next = node->next->next;
}