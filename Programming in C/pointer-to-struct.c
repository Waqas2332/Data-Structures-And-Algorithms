#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r = {10, 6};
    struct rectangle *p = &r;

    // ? Making structure in heap
    struct rectangle *p1;
    p1 = (struct rectangle *)malloc(sizeof(struct rectangle));

    p->breadth = 20;
    printf("Area of rectangle is %d", p->length * p->breadth);
}