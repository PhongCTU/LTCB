#include <stdio.h>
int main()
{
    int m, n, i, j;
    int k = 1;
    scanf("%d%d", &m, &n);
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}