#include <stdio.h>
int main()
{
    int i, n;

    scanf("%d", &n);
    int flag = 1;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
            flag = 0;

    if (flag)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}