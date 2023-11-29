// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

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
int singleNumber(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(*nums), compare);
    int i = 0;
    while (i < numsSize)
    {
        if (nums[i] == nums[i + 1])
        {
            i += 2;
        }
        else
        {
            break;
        }
    }
    return nums[i];
}

// TODO
// * There can be one other approach using the XOR operator

int main()
{
    int nums[] = {4, 1, 2, 1, 2};
    printf("%d", singleNumber(nums, 5));
}