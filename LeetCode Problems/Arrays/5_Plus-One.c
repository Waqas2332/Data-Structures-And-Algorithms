// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

#include <stdio.h>
#include <stdlib.h>

int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    int i = digitsSize - 1;
    while (i >= 0)
    {
        digits[i] += 1;
        if (digits[i] < 10)
        {
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
        i--;
    }
    int *ans = (int *)malloc((digitsSize + 1) * sizeof(int));
    ans[0] = 1;
    for (i = 1; i <= digitsSize; i++)
    {
        ans[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return ans;
}

int main()
{
    int digits[] = {8, 9, 9, 9};
    int *returnSize;
    plusOne(digits, 4, returnSize);
}