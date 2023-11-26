// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

#include <stdio.h>

int searchInsert(int *nums, int numsSize, int target)
{
    // * Used Binary Search
    int start = 0;
    int end = numsSize - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return mid;
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
    return end + 1;
}

int main()
{
    int nums[] = {1, 3, 5, 6};
    int target = 7;
    printf("%d", searchInsert(nums, 4, target));
}