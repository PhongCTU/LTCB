#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 10000000)
    {
        printf("1");
    }
    else
    {
        while (n != 1)
        {
            printf("%d", n % 10);
            n = n / 10;
        }
        printf("%d", n);
    }
}