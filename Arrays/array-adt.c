#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct Array
{
    int length;
    int size;
    int *A;
};

void initialize(struct Array *a)
{
    a->length = 0;
    a->size = 5;
    a->A = (int *)malloc(a->size * sizeof(int));
}

void display(struct Array *a)
{
    printf("\nSize of Array is %d", a->size);
    printf("\nLength of Array is %d", a->length);
    printf("\nElements in Array are ...\n");
    for (int i = 0; i < a->length; i++)
    {
        printf("\n%d", a->A[i]);
    }
    printf("\n\nEnd Of Array\n");
}

void insertOne(struct Array *a, int value)
{
    if (a->length == a->size)
    {
        int *p = (int *)malloc((a->size * 2) * sizeof(int));
        for (int i = 0; i < a->length; i++)
        {
            p[i] = a->A[i];
        }
        a->A = p;
        a->size = a->size * 2;
    }
    a->A[a->length] = value;
    a->length++;
}

int main()
{
    struct Array a;
    int menu;       // For prompting Menu
    int value;      // For inserting value
    int isTrue = 1; // While loop control
    initialize(&a);

    // Logic For Menu display
    while (isTrue)
    {
        printf("\nEnter 1 For Displaying Array, 2 For Inserting Element in array, 0 for closing the program : ");
        scanf("%d", &menu);
        if (menu == 0)
        {
            break;
        }
        if (menu == 1)
        {
            display(&a);
            continue;
        }
        if (menu == 2)
        {
            printf("\nEnter Value to insert in Array ");
            scanf("%d", &value);
            insertOne(&a, value);
        }
    }
}