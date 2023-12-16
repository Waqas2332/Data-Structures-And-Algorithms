// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

#include <stdio.h>
#include <stdlib.h>

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
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *head = NULL;
    struct ListNode *last = NULL;

    if (list1 != NULL && list2 != NULL)
    {
        if (list1->val > list2->val)
        {
            head = list2;
            last = head;
            list2 = list2->next;
            last->next = NULL;
        }
        else
        {
            head = list1;
            last = head;
            list1 = list1->next;
            last->next = NULL;
        }
    }

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val > list2->val)
        {
            last->next = list2;
            last = list2;
            list2 = list2->next;
            last->next = NULL;
        }
        else
        {
            last->next = list1;
            last = list1;
            list1 = list1->next;
            last->next = NULL;
        }
    }

    if (list1 == NULL && list2 == NULL)
    {
        return head;
    }

    if (list1 != NULL)
    {
        if (last)
        {
            last->next = list1;
        }
        else
        {
            head = last = list1;
        }
    }
    else if (list2 != NULL)
    {
        if (last)
        {
            last->next = list2;
        }
        else
        {
            head = last = list2;
        }
    }
    return head;
}
int main()
{
    int arr1[] = {1, 2, 4};
    int arr2[] = {1, 3, 4};

    struct ListNode *list1 = createList(arr1, sizeof(arr1) / sizeof(arr1[0]));
    struct ListNode *list2 = createList(arr2, sizeof(arr2) / sizeof(arr2[0]));

    mergeTwoLists(list1, list2);
}