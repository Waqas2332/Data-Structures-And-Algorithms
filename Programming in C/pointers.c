#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

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

    // * Working With Heap
    int *p1;
    // malloc() returns pointer of type void so we have to explicitly convert it into data type of pointer
    p1 = (int *)malloc(5 * sizeof(int)); // ? Created Array of size 5 in heap and accessed it using pointer p1
    printf("\n%d", p1);
}