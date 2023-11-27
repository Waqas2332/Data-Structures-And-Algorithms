// You are given three strings s1, s2, and s3. You have to perform the following operation on these three strings as many times as you want.

// In one operation you can choose one of these three strings such that its length is at least 2 and delete the rightmost character of it.

// Return the minimum number of operations you need to perform to make the three strings equal if there is a way to make them equal, otherwise, return -1.

#include <stdio.h>
#include <string.h>

int findMinimumOperations(char *s1, char *s2, char *s3)
{

    int lengths[3];
    lengths[0] = strlen(s1);
    lengths[1] = strlen(s2);
    lengths[2] = strlen(s3);
    int small = lengths[0];
    int total = lengths[0] + lengths[1] + lengths[2];
    int count = 0;

    for (int i = 1; i < 3; i++)
    {
        if (lengths[i] < small)
        {
            small = lengths[i];
        }
    }
    for (int i = 0; i < small; i++)
    {
        if (s1[i] == s2[i] && s2[i] == s3[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if (count < 0)
    {
        return -1;
    }
    count *= 3;
    return total - count;
}

int main()
{
    char s1[] = "a";
    char s2[] = "a";
    char s3[] = "a";
    printf("%d", findMinimumOperations(s1, s2, s3));
}
