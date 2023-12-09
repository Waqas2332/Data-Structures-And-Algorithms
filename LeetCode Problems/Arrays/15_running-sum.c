// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.

#include <stdio.h>
#include <stdlib.h>

int *runningSum(int *nums, int numsSize, int *returnSize)
{
    int *ans = (int *)malloc(numsSize * sizeof(int));
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        ans[i] = sum;
    }
    *returnSize = numsSize;
    return ans;
}

int main()
{
    int nums[] = {1, 2, 3, 4};
    int *returnSize;
    runningSum(nums, sizeof(nums) / sizeof(nums[0]), *returnSize);
}