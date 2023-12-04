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

void display()
{
    struct Node *temp = first;
    int count = 0, sum = 0, max = first->data, min = first->data;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        count++;           // counting number of elements in linked list
        sum += temp->data; // sum of all elements in linked list

        if (temp->data > max)
        {
            max = temp->data;
        }

        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    printf("end");
    printf("\nNumber of elements in linked lists : %d\nSum of all elements in linked list : %d\nMaximum element in linked list : %d\nMinimum Element in Linked List : %d", count, sum, max, min);
}

void searchNode(int value)
{
    struct Node *temp = first;
    int index = 0;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("%d is found at %d index", temp->data, index);
            return;
        }
        index++;
        temp = temp->next;
    }
    printf("%d is not found in Linked List", value);
}

int main()
{
    int menu;       // For prompting Menu
    int isTrue = 1; // While loop control

    // Logic For Menu display
    while (isTrue)
    {
        printf("\nEnter 1 For Displaying info about Linked List,\n2 for Inserting Element in Linked List,\nEnter 3 for Searching in Linked List\n ,0 for closing the program : ");
        scanf("%d", &menu);
        if (menu == 0)
        {
            break;
        }
        if (menu == 1)
        {
            display();
            continue;
        }
        if (menu == 2)
        {
            printf("\nEnter the value to be inserted in linked list : ");
            insertNode();
            continue;
        }
        if (menu == 3)
        {
            int value = 0;
            printf("\nEnter the value to for searching in linked list : ");
            scanf("%d", &value);
            searchNode(value);
            continue;
        }
    }
}