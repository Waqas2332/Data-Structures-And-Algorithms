#include <stdio.h>
#include <conio.h>

// Defining a structure
struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r; // declaring a variable of that structure type

    // initializing a structure
    struct rectangle r1 = {10, 5};

    // Accessing structure members
    r1.breadth = 10;
    printf("Area of rectangle = %d", r1.length * r1.breadth);
}