#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
    // Created pointer of the Node type globally so it can be directly accessed in any function
    *first = NULL,
    *last = NULL;

void insertNode()
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d", &p->data);
    if (first == NULL)
    {
        first = p;
        first->next = NULL;
        last = first;
    }
    else
    {
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

int main()
{
    int menu;       // For prompting Menu
    int isTrue = 1; // While loop control

    // Logic For Menu display
    while (isTrue)
    {
        printf("\nEnter 1 For Displaying Linked List, 0 for closing the program : ");
        scanf("%d", &menu);
        if (menu == 0)
        {
            break;
        }
        if (menu == 1)
        {
            continue;
        }
    }
}