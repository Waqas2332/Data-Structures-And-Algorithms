// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

#include <stdio.h>

void moveZeroes(int *nums, int numsSize)
{
    int i = 0, j = 0;
    while (i < numsSize && j < numsSize)
    {
        if (nums[i] == 0)
        {
            i++;
            continue;
        }
        if (nums[j] != 0)
        {
            j++;
            continue;
        }
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
        i++;
        j++;
    }
}

int main()
{
    int nums[] = {0, 1, 0, 3, 12};
    moveZeroes(nums, 5);
}