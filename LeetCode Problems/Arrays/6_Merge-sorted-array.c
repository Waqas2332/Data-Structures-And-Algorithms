// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

#include <stdio.h>
#include <stdlib.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int *temp = (int *)malloc(m * sizeof(int));
    int i = 0;
    int j = 0;
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        temp[i] = nums1[i];
    }
    i = 0;
    while (j < m && k < n)
    {
        if (temp[j] < nums2[k])
        {
            nums1[i] = temp[j];
            j++;
        }
        else
        {
            nums1[i] = nums2[k];
            k++;
        }
        i++;
    }
    for (j; j < m; j++)
    {
        nums1[i] = temp[j];
        i++;
    }
    for (k; k < n; k++)
    {
        nums1[i] = nums2[k];
        i++;
    }
}

int main()
{
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int m = 3;
    int nums2[] = {2, 5, 6};
    int n = 3;
    merge(nums1, 6, 3, nums2, 3, 3);
}