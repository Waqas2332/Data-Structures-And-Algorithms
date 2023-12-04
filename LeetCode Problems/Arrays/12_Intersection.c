// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

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

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int *intersection(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize)
{
    quickSort(nums1, 0, nums1Size - 1);
    quickSort(nums2, 0, nums2Size - 1);
    int i = 0;
    int j = 0;
    int k = 0;
    int size = 0;
    int enterredValue = 0;
    if (nums1Size > nums2Size)
    {
        size = nums2Size;
    }
    else
    {
        size = nums1Size;
    }
    int *result = (int *)malloc(size * sizeof(int));
    for (int loop = 0; loop < size; loop++)
    {
        result[loop] = -1;
    }

    while (i < nums1Size && j < nums2Size)
    {

        if (nums1[i] < nums2[j])
        {
            i++;
            continue;
        }
        if (nums1[i] > nums2[j])
        {
            j++;
            continue;
        }
        if (nums1[i] == nums2[j])
        {
            if (enterredValue == nums1[i])
            {
                i++;
                j++;
                continue;
            }
            result[k] = nums1[i];
            enterredValue = result[k];
            i++;
            j++;
            k++;
        }
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (result[i] != -1)
        {
            count++;
        }
    }
    returnSize = &count;
    return result;
}

int main()
{
    int nums1[] = {8, 0, 3};
    int nums2[] = {0, 0};
    int *returnSize;
    intersection(nums1, 3, nums2, 2, returnSize);
}