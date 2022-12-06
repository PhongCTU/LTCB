#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 10 == 0)
    {
        printf("1");
    }
    else
        while (n != 0)
        {
            printf("%d", n % 10);
            n = n / 10;
        }
    return 0;
}