// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
// Return k.

#include <stdio.h>

int removeElement(int *nums, int numsSize, int val)
{
    int i = 0;
    int j = numsSize - 1;
    while (i < j)
    {
        if (nums[i] != val)
        {
            i++;
            continue;
        }
        if (nums[j] == val)
        {
            j--;
            continue;
        }
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    int k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            k++;
        }
    }
    return k;
}

int main()
{
    int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    printf("%d", removeElement(nums, 8, val));
}