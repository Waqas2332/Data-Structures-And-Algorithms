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

int getDecimalValue(struct ListNode *head)
{
    struct ListNode *p = head;
    int size = 0;
    int ans = 0;
    int plus = 1;
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

    for (int i = size - 1; i >= 0; i--)
    {
        if (result[i] == 1)
        {
            ans += plus;
        }
        plus *= 2;
    }
    return size;
}

int main()
{
    int arr[] = {1, 0, 1};
    struct ListNode *head = createList(arr, 3);
    printf("%d", getDecimalValue(head));
}