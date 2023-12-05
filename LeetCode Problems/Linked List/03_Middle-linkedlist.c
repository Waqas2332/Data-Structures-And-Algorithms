
#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
} *first = NULL;

struct ListNode *middleNode(struct ListNode *head)
{
    int size = 0;
    struct ListNode *p = head;
    while (p != NULL)
    {
        size++;
        p = p->next;
    }
    p = head;
    for (int i = 0; i < size / 2; i++)
    {
        p = p->next;
    }
    return p;
}