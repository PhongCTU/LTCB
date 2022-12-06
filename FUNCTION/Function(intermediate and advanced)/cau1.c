#include <stdio.h>
int isPalindrome(int n)
{
    int i, r, sum = 0;
    for (i = n; n != 0; n = n / 10)
    {
        r = n % 10;
        sum = sum * 10 + r;
    }
    if (sum == i)
        return 1;
    return 0;
}