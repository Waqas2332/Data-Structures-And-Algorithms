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
    printf("\nElements in Array are ...\n");
    for (int i = 0; i < a->length; i++)
    {
        printf("\n%d", a->A[i]);
    }
    printf("\n\nEnd Of Array\n");
}

int main()
{
    struct Array a;
    initialize(&a);
    display(&a);
}