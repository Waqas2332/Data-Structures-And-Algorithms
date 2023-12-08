// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
} *first = NULL;

struct ListNode *createList(int arr[], int size)
{
    first = (struct ListNode *)malloc(sizeof(struct ListNode));
    first->val = arr[0];
    first->next = NULL;
    struct ListNode *temp = first;
    for (int i = 1; i < size; i++)
    {
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->val = arr[i];
        node->next = NULL;
        temp->next = node;
        temp = temp->next;
    }
    return first;
}

struct ListNode *removeElements(struct ListNode *head, int val)
{
    struct ListNode *p = head;
    while (p != NULL)
    {
        if (p->next->val == val)
        {
            p->next = p->next->next;
        }
        p = p->next;
    }
    return head;
}

int main()
{
    int arr[] = {1, 2, 6, 3, 4, 5, 6};
    struct ListNode *head = createList(arr, sizeof(arr) / sizeof(arr[0]));
    int val = 6;
    removeElements(head, val);
}