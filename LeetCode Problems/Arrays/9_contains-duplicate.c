// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include <stdio.h>

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

int containsDuplicate(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(*nums), compare);
    ;
    int ans = 0;
    int i = 1;
    while (i < numsSize)
    {
        if (nums[i] == nums[i - 1])
        {
            ans = 1;
            return ans;
        }
        i++;
    }
    return ans;
}

int main()
{
    int nums[] = {1, 2, 3, 1};
    printf("%d", containsDuplicate(nums, 4));
}