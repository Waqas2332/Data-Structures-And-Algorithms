// Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

// Specifically, ans is the concatenation of two nums arrays.

// Return the array ans.

#include <stdio.h>
#include <stdlib.h>

int *getConcatenation(int *nums, int numsSize, int *returnSize)
{
    int *ans = (int *)malloc((numsSize * 2) * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }
    *returnSize = numsSize * 2;
    return ans;
}

int main()
{
    int nums[] = {1, 2, 1};
    int *returnSize;
    getConcatenation(nums, sizeof(nums) / sizeof(nums[0]), returnSize);
}