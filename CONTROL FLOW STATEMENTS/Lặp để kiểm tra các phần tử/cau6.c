#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("2 ");
    int flat = 0;
    int i, j;
    for (i = 3; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)

                flat = 1;
            break;
        }
        if (flat == 0)
            printf("%d", i);
    }
}