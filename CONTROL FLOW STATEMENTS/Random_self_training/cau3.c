#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("*");
    printf("\n");
    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
            printf(" ");
        for (; j <= n; j++)
            printf("*");
        printf("\n");
    }
}