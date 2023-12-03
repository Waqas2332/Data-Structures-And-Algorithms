#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = 10;
    int menu;       // For prompting Menu
    int value;      // For inserting value
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