#include <stdio.h>
#include <conio.h>

struct Rectangle
{
    int length;
    int breadth;
};

// Call by value
int valueArea(struct Rectangle r)
{
    r.length = 20;
    return r.length * r.breadth;
}
// call by address
int addressArea(struct Rectangle *r)
{
    r->length = 20;
    return r->length * r->breadth;
}

int main()
{
    struct Rectangle r = {10, 5};
    printf("\nArea of rectangle is %d", valueArea(r));
    printf("\nLength of rectangle after call by value function is %d", r.length);
    printf("\nArea of rectangle is %d", addressArea(&r));
    printf("\nLength of rectangle after call by address function is %d", r.length);
}