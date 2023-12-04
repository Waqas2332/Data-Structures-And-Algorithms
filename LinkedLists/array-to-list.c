#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

struct Node *createList(int arr[], int size)
{
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    struct Node *temp = first;
    for (int i = 1; i < size; i++)
    {
        struct Node *node = (struct Node *)malloc(sizeof(struct Node));
        node->data = arr[i];
        node->next = NULL;
        temp->next = node;
        temp = temp->next;
    }
    return first;
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    int arr[] = {1, 0, 1};
    struct Node *head = createList(arr, 3);
    printf("%d", head->next->data);
    // display(first);
}