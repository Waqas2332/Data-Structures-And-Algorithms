// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include <stdio.h>
#include <stdlib.h>

int compare(const void *num1, const void *num2) // comparing function
{
    int a = *(int *)num1;
    int b = *(int *)num2;
    if (a > b)
    {
        return 1;
    }
    else if (a < b)
    {
        return -1;
    }
    return 0;
}

int majorityElement(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(*nums), compare);
    return nums[numsSize / 2];
}

int main()
{
    int nums[] = {3, 2, 3};
    printf("%d", majorityElement(nums, 3));
}