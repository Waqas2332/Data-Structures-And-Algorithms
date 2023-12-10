#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
} *first = NULL;

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *p = head;
    struct ListNode *q = NULL;
    struct ListNode *r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;

        q->next = r;
    }
    return q;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    struct ListNode *head = createList(arr, sizeof(arr) / sizeof(arr[0]));
    reverseList(head);
}