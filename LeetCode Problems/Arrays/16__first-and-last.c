// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *nums, int start, int end, int target)
{
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (nums[start] == target)
        {
            return start;
        }
        else if (nums[mid] == target)
        {
            end = mid;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int binarySearch2(int *nums, int start, int end, int target)
{
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (nums[end] == target)
        {
            return end;
        }
        else if (nums[mid] == target)
        {
            end = mid;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int *searchRange(int *nums, int numsSize, int target, int *returnSize)
{
    int *ans = (int *)malloc(2 * sizeof(int));
    ans[0] = -1;
    ans[1] = -1;
    int start = 0;
    int end = numsSize - 1;

    ans[0] = binarySearch(nums, start, end, target);
    if (ans[0] == -1)
    {
        ans[1] = -1;
        *returnSize = 2;
        return ans;
    }

    ans[1] = binarySearch2(nums, start, end, target);
    *returnSize = 2;
    return ans;
}

int main()
{
    int nums[] = {1};
    int target = 1;
    int *returnSize;
    searchRange(nums, sizeof(nums) / sizeof(nums[0]), target, returnSize);
}