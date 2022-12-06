
#include <stdio.h>
int main()
{
    int n;
    int j;
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 2; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}