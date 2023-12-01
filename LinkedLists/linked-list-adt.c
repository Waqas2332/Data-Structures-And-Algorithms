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
}