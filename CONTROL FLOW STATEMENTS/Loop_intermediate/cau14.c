
#include <stdio.h>
int main()
{
    int n;
    int j;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
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