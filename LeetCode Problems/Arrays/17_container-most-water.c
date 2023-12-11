#include <stdio.h>

int maxArea(int *height, int heightSize)
{
    int start = 0;
    int end = heightSize - 1;
    int max = 0;

    while (start < end)
    {
        int w = end - start;
        int h = height[start] < height[end] ? height[start] : height[end];

        int maxWater = h * w;
        if (maxWater > max)
        {
            max = maxWater;
        }

        if (height[start] < height[end])
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return max;
}

int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    maxArea(height, sizeof(height) / sizeof(height[0]));
}