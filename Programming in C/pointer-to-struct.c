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

    p->breadth = 20;
    printf("Area of rectangle is %d", p->length * p->breadth);
}