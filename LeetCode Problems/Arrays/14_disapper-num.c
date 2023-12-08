// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Choose the rightmost element as the pivot
    int i = (low - 1);     // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot)
        {
            i++; // Increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Partitioning index
        int pi = partition(arr, low, high);

        // Separately sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize)
{
    quickSort(nums, 0, numsSize - 1);
    int *ans = (int *)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        ans[i] = -1;
    }
    int i = 0;
    int j = 0;
    int value = 0;

    while (i < numsSize)
    {
        if (nums[i] == value)
        {
            i++;
            continue;
        }
        if (nums[i] == value + 1)
        {
            value++;
            i++;
            continue;
        }
        value++;
        ans[j] = value;
        j++;
    }

    if (nums[numsSize - 1] != numsSize)
    {
        value++;
        for (value; value <= numsSize; value++)
        {
            ans[j] = value;
            j++;
        }
    }
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (ans[i] == -1)
        {
            count++;
        }
    }

    *returnSize = numsSize - count;
    return ans;
}
int main()
{
    int nums[] = {5, 4, 6, 7, 9, 3, 10, 9, 5, 6};
    int *returnSize;
    findDisappearedNumbers(nums, sizeof(nums) / sizeof(nums[0]), returnSize);
}