#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
} *first = NULL;

struct ListNode *createList(int arr[], int size)
{
    first = (struct ListNode *)malloc(sizeof(struct ListNode));
    first->data = arr[0];
    first->next = NULL;
    struct ListNode *temp = first;
    for (int i = 1; i < size; i++)
    {
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->data = arr[i];
        node->next = NULL;
        temp->next = node;
        temp = temp->next;
    }
    return first;
}

void display(struct ListNode *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *p = head;
    int size = 0;
    while (p != NULL)
    {
        size++;
        p = p->next;
    }
    int *result = (int *)malloc(size * sizeof(int));
    p = head;

    for (int i = 0; i < size; i++)
    {
        result[i] = p->data;
        p = p->next;
    }

    for (int i = 0, j = size - 1; i < j; i++)
    {
        int temp = result[i];
        result[i] = result[j];
        result[j] = temp;
        j--;
    }

    p = createList(result, size);
    display(p);
    return p;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    struct ListNode *head = createList(arr, sizeof(arr) / sizeof(arr[0]));
    reverseList(head);
}