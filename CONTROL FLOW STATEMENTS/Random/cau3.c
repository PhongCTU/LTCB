#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    if (n < 2)
    {
        printf("%d is not a prime number.", n);
    }
    else if (n == 2)
    {
        printf("%d is a prime number.", n);
    }
    else if (n % 2 == 0)
    {
        printf("%d is not a prime number.", n);
    }
    else
    {
        i = 3;
        while (i <= n)
        {
            if (n % i == 0)
                break;
            i = i + 2;
        }
        if (i == n)
        {
            printf("%d is a prime number.", n);
        }
        else
            printf("%d is not a prime number.", n);
    }
}