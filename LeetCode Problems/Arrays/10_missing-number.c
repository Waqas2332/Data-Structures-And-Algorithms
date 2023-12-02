// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

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

int missingNumber(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(*nums), compare);
    int i = 0;
    for (i; i < numsSize; i++)
    {
        if (i != nums[i])
        {
            break;
        }
    }
    return i;
}

int main()
{
    int nums[] = {3, 0, 1};
    printf("%d", missingNumber(nums, 3));
}