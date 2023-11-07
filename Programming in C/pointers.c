#include <stdio.h>
#include <conio.h>

int main()
{
    // data variable
    int a = 20;
    // Address variable or pointer
    int *p;
    p = &a;
    printf("%u\n", &a); // address of a variable
    printf("%d\n", p);  // returns value stored pointer (same as address of a)
    printf("%d", *p);   // also known as defrencing
    printf("\n%u", &p); // returns address of pointer
}